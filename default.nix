{ lib, stdenv, qmake, kwindowsystem, qtbase, qttools, qtx11extras, wrapQtAppsHook }:

stdenv.mkDerivation rec {
	pname = "";
	version = "";

	src = ./src/.;
	nativeBuildInputs = [ qmake wrapQtAppsHook ];
	buildInputs = [
		qtbase
		qttools
		qtx11extras
		kwindowsystem
	];
}
