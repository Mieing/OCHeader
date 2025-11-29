@class NSMutableDictionary;

@interface AWESearchVideoStatisticsUtil : NSObject

@property (nonatomic) double beginTimestamp;
@property (nonatomic) double endDragTimestamp;
@property (retain, nonatomic) NSMutableDictionary *extraInfo;
@property (retain, nonatomic) NSMutableDictionary *timeInfo;
@property (nonatomic) BOOL finishInteractAfterAnimate;

+ (id)shareInstance;

- (void)cleanDragEndTimestamp;
- (void)trackEnterInnerVideoPlayCostWithScene:(id)a0 extraInfo:(id)a1;
- (void)trackSlideVideoFirstFrameCostWithScene:(id)a0 extraInfo:(id)a1;
- (void)videoDragEnd;
- (void)beginEnterInner;
- (void)trackEnterInnerTimeCostWithScene:(id)a0 extraInfo:(id)a1;
- (void)finishAddInteract:(id)a0;
- (void)trackTvent;
- (void)innerExtraInfo:(id)a0;
- (void).cxx_destruct;

@end
