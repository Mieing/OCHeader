@class NSArray, IESLiveGCDTimer;
@protocol IESLiveClientAIService;

@interface IESLiveClientAIPreloadCardFragment : IESLiveRoomComponent

@property (retain, nonatomic) id<IESLiveClientAIService> clientAIService;
@property (retain, nonatomic) IESLiveGCDTimer *preloadTimer;
@property (nonatomic) BOOL hasPreloadCard;
@property (retain, nonatomic) NSArray *predictIntervalArray;
@property (nonatomic) long long timerCount;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)predictNeedPreloadAnchorCard:(id)a0;
- (void).cxx_destruct;

@end
