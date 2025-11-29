@class AVAsset, NLETrackSlot_OC;

@interface DVEFrameGeneratorInputModel : NSObject

@property (retain, nonatomic) NLETrackSlot_OC *videoSlot;
@property (retain, nonatomic) AVAsset *asset;
@property (nonatomic) struct CGSize { double width; double height; } frameSize;
@property (nonatomic) BOOL enableUseVE;

- (void).cxx_destruct;

@end
