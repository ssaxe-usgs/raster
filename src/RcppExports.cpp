// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// doBilinear
NumericVector doBilinear(NumericMatrix xy, NumericMatrix x, NumericMatrix y, NumericMatrix v);
RcppExport SEXP _raster_doBilinear(SEXP xySEXP, SEXP xSEXP, SEXP ySEXP, SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type xy(xySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(doBilinear(xy, x, y, v));
    return rcpp_result_gen;
END_RCPP
}
// doCellFromRowCol
NumericVector doCellFromRowCol(IntegerVector nrow, IntegerVector ncol, IntegerVector rownr, IntegerVector colnr);
RcppExport SEXP _raster_doCellFromRowCol(SEXP nrowSEXP, SEXP ncolSEXP, SEXP rownrSEXP, SEXP colnrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type rownr(rownrSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type colnr(colnrSEXP);
    rcpp_result_gen = Rcpp::wrap(doCellFromRowCol(nrow, ncol, rownr, colnr));
    return rcpp_result_gen;
END_RCPP
}
// getPolygons
NumericMatrix getPolygons(NumericMatrix xyv, NumericVector res, int nodes);
RcppExport SEXP _raster_getPolygons(SEXP xyvSEXP, SEXP resSEXP, SEXP nodesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type xyv(xyvSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type res(resSEXP);
    Rcpp::traits::input_parameter< int >::type nodes(nodesSEXP);
    rcpp_result_gen = Rcpp::wrap(getPolygons(xyv, res, nodes));
    return rcpp_result_gen;
END_RCPP
}
// getMode
double getMode(NumericVector values, int ties);
RcppExport SEXP _raster_getMode(SEXP valuesSEXP, SEXP tiesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type values(valuesSEXP);
    Rcpp::traits::input_parameter< int >::type ties(tiesSEXP);
    rcpp_result_gen = Rcpp::wrap(getMode(values, ties));
    return rcpp_result_gen;
END_RCPP
}
// doSpmin
NumericVector doSpmin(NumericVector x, NumericVector y);
RcppExport SEXP _raster_doSpmin(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(doSpmin(x, y));
    return rcpp_result_gen;
END_RCPP
}
// doSpmax
NumericVector doSpmax(NumericVector x, NumericVector y);
RcppExport SEXP _raster_doSpmax(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(doSpmax(x, y));
    return rcpp_result_gen;
END_RCPP
}
// ppmin
NumericVector ppmin(NumericVector x, NumericVector y, bool narm);
RcppExport SEXP _raster_ppmin(SEXP xSEXP, SEXP ySEXP, SEXP narmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< bool >::type narm(narmSEXP);
    rcpp_result_gen = Rcpp::wrap(ppmin(x, y, narm));
    return rcpp_result_gen;
END_RCPP
}
// ppmax
NumericVector ppmax(NumericVector x, NumericVector y, bool narm);
RcppExport SEXP _raster_ppmax(SEXP xSEXP, SEXP ySEXP, SEXP narmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< bool >::type narm(narmSEXP);
    rcpp_result_gen = Rcpp::wrap(ppmax(x, y, narm));
    return rcpp_result_gen;
END_RCPP
}
// doRowMin
NumericVector doRowMin(NumericMatrix x, bool narm);
RcppExport SEXP _raster_doRowMin(SEXP xSEXP, SEXP narmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type narm(narmSEXP);
    rcpp_result_gen = Rcpp::wrap(doRowMin(x, narm));
    return rcpp_result_gen;
END_RCPP
}
// doRowMax
NumericVector doRowMax(NumericMatrix x, bool narm);
RcppExport SEXP _raster_doRowMax(SEXP xSEXP, SEXP narmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type narm(narmSEXP);
    rcpp_result_gen = Rcpp::wrap(doRowMax(x, narm));
    return rcpp_result_gen;
END_RCPP
}
// aggregate_get
NumericMatrix aggregate_get(NumericMatrix d, NumericVector dims);
RcppExport SEXP _raster_aggregate_get(SEXP dSEXP, SEXP dimsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type d(dSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dims(dimsSEXP);
    rcpp_result_gen = Rcpp::wrap(aggregate_get(d, dims));
    return rcpp_result_gen;
END_RCPP
}
// aggregate_fun
NumericMatrix aggregate_fun(NumericMatrix d, NumericVector dim, bool narm, int fun);
RcppExport SEXP _raster_aggregate_fun(SEXP dSEXP, SEXP dimSEXP, SEXP narmSEXP, SEXP funSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type d(dSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< bool >::type narm(narmSEXP);
    Rcpp::traits::input_parameter< int >::type fun(funSEXP);
    rcpp_result_gen = Rcpp::wrap(aggregate_fun(d, dim, narm, fun));
    return rcpp_result_gen;
END_RCPP
}
// get_area_polygon
NumericVector get_area_polygon(NumericMatrix d, bool lonlat);
RcppExport SEXP _raster_get_area_polygon(SEXP dSEXP, SEXP lonlatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type d(dSEXP);
    Rcpp::traits::input_parameter< bool >::type lonlat(lonlatSEXP);
    rcpp_result_gen = Rcpp::wrap(get_area_polygon(d, lonlat));
    return rcpp_result_gen;
END_RCPP
}
// point_distance
NumericVector point_distance(NumericMatrix p1, NumericMatrix p2, bool lonlat, double a, double f);
RcppExport SEXP _raster_point_distance(SEXP p1SEXP, SEXP p2SEXP, SEXP lonlatSEXP, SEXP aSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type p1(p1SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type p2(p2SEXP);
    Rcpp::traits::input_parameter< bool >::type lonlat(lonlatSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(point_distance(p1, p2, lonlat, a, f));
    return rcpp_result_gen;
END_RCPP
}
// distanceToNearestPoint
NumericVector distanceToNearestPoint(NumericMatrix d, NumericMatrix p, bool lonlat, double a, double f);
RcppExport SEXP _raster_distanceToNearestPoint(SEXP dSEXP, SEXP pSEXP, SEXP lonlatSEXP, SEXP aSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type d(dSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type p(pSEXP);
    Rcpp::traits::input_parameter< bool >::type lonlat(lonlatSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(distanceToNearestPoint(d, p, lonlat, a, f));
    return rcpp_result_gen;
END_RCPP
}
// directionToNearestPoint
NumericVector directionToNearestPoint(NumericMatrix d, NumericMatrix p, bool lonlat, bool degrees, bool from, double a, double f);
RcppExport SEXP _raster_directionToNearestPoint(SEXP dSEXP, SEXP pSEXP, SEXP lonlatSEXP, SEXP degreesSEXP, SEXP fromSEXP, SEXP aSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type d(dSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type p(pSEXP);
    Rcpp::traits::input_parameter< bool >::type lonlat(lonlatSEXP);
    Rcpp::traits::input_parameter< bool >::type degrees(degreesSEXP);
    Rcpp::traits::input_parameter< bool >::type from(fromSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(directionToNearestPoint(d, p, lonlat, degrees, from, a, f));
    return rcpp_result_gen;
END_RCPP
}
// dest_point
NumericMatrix dest_point(NumericMatrix xybd, bool lonlat, double a, double f);
RcppExport SEXP _raster_dest_point(SEXP xybdSEXP, SEXP lonlatSEXP, SEXP aSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type xybd(xybdSEXP);
    Rcpp::traits::input_parameter< bool >::type lonlat(lonlatSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(dest_point(xybd, lonlat, a, f));
    return rcpp_result_gen;
END_RCPP
}
// doCellFromXY
NumericVector doCellFromXY(int ncols, int nrows, double xmin, double xmax, double ymin, double ymax, NumericVector x, NumericVector y);
RcppExport SEXP _raster_doCellFromXY(SEXP ncolsSEXP, SEXP nrowsSEXP, SEXP xminSEXP, SEXP xmaxSEXP, SEXP yminSEXP, SEXP ymaxSEXP, SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type ncols(ncolsSEXP);
    Rcpp::traits::input_parameter< int >::type nrows(nrowsSEXP);
    Rcpp::traits::input_parameter< double >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< double >::type xmax(xmaxSEXP);
    Rcpp::traits::input_parameter< double >::type ymin(yminSEXP);
    Rcpp::traits::input_parameter< double >::type ymax(ymaxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(doCellFromXY(ncols, nrows, xmin, xmax, ymin, ymax, x, y));
    return rcpp_result_gen;
END_RCPP
}
// doXYFromCell
NumericMatrix doXYFromCell(int ncols, int nrows, double xmin, double xmax, double ymin, double ymax, NumericVector cell);
RcppExport SEXP _raster_doXYFromCell(SEXP ncolsSEXP, SEXP nrowsSEXP, SEXP xminSEXP, SEXP xmaxSEXP, SEXP yminSEXP, SEXP ymaxSEXP, SEXP cellSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type ncols(ncolsSEXP);
    Rcpp::traits::input_parameter< int >::type nrows(nrowsSEXP);
    Rcpp::traits::input_parameter< double >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< double >::type xmax(xmaxSEXP);
    Rcpp::traits::input_parameter< double >::type ymin(yminSEXP);
    Rcpp::traits::input_parameter< double >::type ymax(ymaxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type cell(cellSEXP);
    rcpp_result_gen = Rcpp::wrap(doXYFromCell(ncols, nrows, xmin, xmax, ymin, ymax, cell));
    return rcpp_result_gen;
END_RCPP
}
// doFourCellsFromXY
NumericMatrix doFourCellsFromXY(int ncols, int nrows, double xmin, double xmax, double ymin, double ymax, NumericMatrix xy, bool duplicates, bool isGlobalLonLat);
RcppExport SEXP _raster_doFourCellsFromXY(SEXP ncolsSEXP, SEXP nrowsSEXP, SEXP xminSEXP, SEXP xmaxSEXP, SEXP yminSEXP, SEXP ymaxSEXP, SEXP xySEXP, SEXP duplicatesSEXP, SEXP isGlobalLonLatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type ncols(ncolsSEXP);
    Rcpp::traits::input_parameter< int >::type nrows(nrowsSEXP);
    Rcpp::traits::input_parameter< double >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< double >::type xmax(xmaxSEXP);
    Rcpp::traits::input_parameter< double >::type ymin(yminSEXP);
    Rcpp::traits::input_parameter< double >::type ymax(ymaxSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type xy(xySEXP);
    Rcpp::traits::input_parameter< bool >::type duplicates(duplicatesSEXP);
    Rcpp::traits::input_parameter< bool >::type isGlobalLonLat(isGlobalLonLatSEXP);
    rcpp_result_gen = Rcpp::wrap(doFourCellsFromXY(ncols, nrows, xmin, xmax, ymin, ymax, xy, duplicates, isGlobalLonLat));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP _broom(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP _do_clamp(SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP _do_layerize(SEXP, SEXP, SEXP);
RcppExport SEXP _do_terrain(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP _edge(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP _focal_fun(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP _focal_get(SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP _focal_sum(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP _point_in_polygon2(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP _reclass(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_raster_doBilinear", (DL_FUNC) &_raster_doBilinear, 4},
    {"_raster_doCellFromRowCol", (DL_FUNC) &_raster_doCellFromRowCol, 4},
    {"_raster_getPolygons", (DL_FUNC) &_raster_getPolygons, 3},
    {"_raster_getMode", (DL_FUNC) &_raster_getMode, 2},
    {"_raster_doSpmin", (DL_FUNC) &_raster_doSpmin, 2},
    {"_raster_doSpmax", (DL_FUNC) &_raster_doSpmax, 2},
    {"_raster_ppmin", (DL_FUNC) &_raster_ppmin, 3},
    {"_raster_ppmax", (DL_FUNC) &_raster_ppmax, 3},
    {"_raster_doRowMin", (DL_FUNC) &_raster_doRowMin, 2},
    {"_raster_doRowMax", (DL_FUNC) &_raster_doRowMax, 2},
    {"_raster_aggregate_get", (DL_FUNC) &_raster_aggregate_get, 2},
    {"_raster_aggregate_fun", (DL_FUNC) &_raster_aggregate_fun, 4},
    {"_raster_get_area_polygon", (DL_FUNC) &_raster_get_area_polygon, 2},
    {"_raster_point_distance", (DL_FUNC) &_raster_point_distance, 5},
    {"_raster_distanceToNearestPoint", (DL_FUNC) &_raster_distanceToNearestPoint, 5},
    {"_raster_directionToNearestPoint", (DL_FUNC) &_raster_directionToNearestPoint, 7},
    {"_raster_dest_point", (DL_FUNC) &_raster_dest_point, 4},
    {"_raster_doCellFromXY", (DL_FUNC) &_raster_doCellFromXY, 8},
    {"_raster_doXYFromCell", (DL_FUNC) &_raster_doXYFromCell, 7},
    {"_raster_doFourCellsFromXY", (DL_FUNC) &_raster_doFourCellsFromXY, 9},
    {"_broom",                          (DL_FUNC) &_broom,                          6},
    {"_do_clamp",                       (DL_FUNC) &_do_clamp,                       4},
    {"_do_layerize",                    (DL_FUNC) &_do_layerize,                    3},
    {"_do_terrain",                     (DL_FUNC) &_do_terrain,                     8},
    {"_edge",                           (DL_FUNC) &_edge,                           6},
    {"_focal_fun",                      (DL_FUNC) &_focal_fun,                      7},
    {"_focal_get",                      (DL_FUNC) &_focal_get,                      4},
    {"_focal_sum",                      (DL_FUNC) &_focal_sum,                      7},
    {"_point_in_polygon2",              (DL_FUNC) &_point_in_polygon2,              6},
    {"_reclass",                        (DL_FUNC) &_reclass,                        7},
    {NULL, NULL, 0}
};

RcppExport void R_init_raster(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
