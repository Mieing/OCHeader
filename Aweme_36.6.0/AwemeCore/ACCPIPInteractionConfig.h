@class NLETrackSlot_OC, NLEInterface_OC, AWEVideoPublishViewModel;

@interface ACCPIPInteractionConfig : NSObject

@property (nonatomic) double canvasRatio;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) double relativeWidth;
@property (nonatomic) double relativeHeight;
@property (nonatomic) double transformX;
@property (nonatomic) double transformY;
@property (nonatomic) double scale;
@property (nonatomic) double rotation;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (weak, nonatomic) NLETrackSlot_OC *slot;
@property (weak, nonatomic) NLEInterface_OC *nle;
@property (nonatomic) BOOL isMainTrack;
@property (copy, nonatomic) id /* block */ replaceImageCompletion;
@property (copy, nonatomic) id /* block */ openAlbumCallBack;
@property (nonatomic) BOOL isAIGCSlot;

- (void).cxx_destruct;

@end
