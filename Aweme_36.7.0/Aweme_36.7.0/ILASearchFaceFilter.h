@interface ILASearchFaceFilter : NSObject

@property (nonatomic) int maxFaceYawAbs;
@property (nonatomic) int maxFaceRollAbs;
@property (nonatomic) int maxFacePitchAbs;
@property (nonatomic) float minFaceProportion;
@property (nonatomic) float maxFaceProportion;
@property (nonatomic) int maxFaceInPerAsset;
@property (nonatomic) float maxFaceOccusionProb;
@property (nonatomic) float maxFaceIncompleteProb;

@end
