#ifndef MyAnalysis_DisplacedJetAnlzr_track_h
#define MyAnalysis_DisplacedJetAnlzr_track_h

struct track {

   double pt,eta,phi,chi2,ip2d,ip3d,ip2dsig,ip3dsig,lxy,vtxweight;
   int nHits,nPixHits,algo;

};

#endif
