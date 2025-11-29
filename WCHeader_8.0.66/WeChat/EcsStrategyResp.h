@class EcsFollowBarStrategy, EcsNotifyStrategy, EcsRemainActicleStrategy, EcsProductEvaluationCardStrategy, EcsMsgResortUserConfig, EcsAppMsgCoverPreloadStrategy, EcsBoxSearchStrategy, BaseResponse, EcsTimelineUIStrategy, EcsRecommendFeedsStrategy, EcsMsgResortControlInfo, EcsStrategyControlInfo;

@interface EcsStrategyResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) EcsStrategyControlInfo *strategyControlInfo;
@property (retain, nonatomic) EcsMsgResortControlInfo *msgResortControlInfo;
@property (retain, nonatomic) EcsMsgResortUserConfig *msgResortUserConfig;
@property (retain, nonatomic) EcsAppMsgCoverPreloadStrategy *appmsgCoverPreloadStrategy;
@property (retain, nonatomic) EcsRecommendFeedsStrategy *recFeedsStrategy;
@property (retain, nonatomic) EcsBoxSearchStrategy *boxSearchStrategy;
@property (retain, nonatomic) EcsNotifyStrategy *notifyStrategy;
@property (retain, nonatomic) EcsProductEvaluationCardStrategy *productEvaluationCardStrategy;
@property (retain, nonatomic) EcsFollowBarStrategy *followBarStrategy;
@property (retain, nonatomic) EcsRemainActicleStrategy *remainActicleStrategy;
@property (retain, nonatomic) EcsTimelineUIStrategy *timelineUiStrategy;

+ (void)initialize;

- (void)setTimelineUiStrategy:(id)a0;
- (id)timelineUiStrategy;
- (void)setRemainActicleStrategy:(id)a0;
- (id)remainActicleStrategy;
- (void)setFollowBarStrategy:(id)a0;
- (id)followBarStrategy;
- (void)setProductEvaluationCardStrategy:(id)a0;
- (id)productEvaluationCardStrategy;
- (void)setNotifyStrategy:(id)a0;
- (id)notifyStrategy;
- (void)setBoxSearchStrategy:(id)a0;
- (id)boxSearchStrategy;
- (void)setRecFeedsStrategy:(id)a0;
- (id)recFeedsStrategy;
- (void)setAppmsgCoverPreloadStrategy:(id)a0;
- (id)appmsgCoverPreloadStrategy;
- (void)setMsgResortUserConfig:(id)a0;
- (id)msgResortUserConfig;
- (void)setMsgResortControlInfo:(id)a0;
- (id)msgResortControlInfo;
- (void)setStrategyControlInfo:(id)a0;
- (id)strategyControlInfo;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
