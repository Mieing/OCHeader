@class HTSLiveRoomStreamAdaptationMessage;

@interface AWESearchLiveAnchorImageCroppingInfo : NSObject

@property (nonatomic) struct CGSize { double width; double height; } liveMediaSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerBounds;
@property (nonatomic) long long scaleType;
@property (retain, nonatomic) HTSLiveRoomStreamAdaptationMessage *adaptationMessage;
@property (nonatomic) double topSafeAreaHeight;
@property (nonatomic) BOOL isOnlyCropOnce;
@property (nonatomic) double minThreshold;
@property (nonatomic) double animationDuration;
@property (readonly, nonatomic) double liveMediaWHRatio;
@property (readonly, nonatomic) double containerHeight;
@property (readonly, nonatomic) double containerWHRatio;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } liveMediaScaledSize;
@property (readonly, nonatomic) double topClipHeight;

- (BOOL)shouldCropAnchorImage;
- (double)calculateContainerTop;
- (void).cxx_destruct;

@end
