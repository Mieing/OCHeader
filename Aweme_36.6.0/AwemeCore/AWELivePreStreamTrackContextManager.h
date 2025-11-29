@class NSDictionary, NSMutableDictionary, NSNumber;

@interface AWELivePreStreamTrackContextManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *detailInfos;
@property (retain, nonatomic) NSDictionary *stageInfos;
@property (retain, nonatomic) NSMutableDictionary *swipeAwayInfos;
@property (retain, nonatomic) NSMutableDictionary *swipeAwayDuration;
@property (nonatomic) double endDraggingTime;
@property (nonatomic) long long endDraggingEnterTime;
@property (nonatomic) long long firstFrameTime;
@property (retain, nonatomic) NSNumber *scrollDirection;
@property (nonatomic) BOOL firstScreenHasTracked;
@property (nonatomic) BOOL hasTracked;

- (void)endRecord:(unsigned long long)a0 element:(id)a1 model:(id)a2;
- (void)startRecord:(unsigned long long)a0 element:(id)a1;
- (void)recordSwipeAwayWithStage:(unsigned long long)a0;
- (void)endRecordSwipeAway;
- (void)trackPreStreamProcessIfNeededWithModel:(id)a0;
- (void)startRecordSwipeAwayWithVelocity:(struct CGPoint { double x0; double x1; })a0;
- (double)durationForElement:(id)a0 stage:(unsigned long long)a1;
- (unsigned long long)getLifeCycleStageWithEventName:(id)a0;
- (void)endRecord:(unsigned long long)a0 element:(id)a1 atTime:(double)a2 model:(id)a3;
- (id)createStageInfoDic;
- (id)getEventNameWithStage:(unsigned long long)a0 element:(id)a1;
- (void)startRecord:(id)a0 atTime:(double)a1;
- (void)trackPreStreamFirstScreenShow;
- (void)resetDetailInfos;
- (id)getElementLifeCycleStage:(unsigned long long)a0;
- (id)getSwipeAwayNameWithStage:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
