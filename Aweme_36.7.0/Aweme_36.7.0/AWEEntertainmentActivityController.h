@class NSArray, NSString, NSMutableDictionary, NSMutableArray;

@interface AWEEntertainmentActivityController : HTSService <AWEUserMessage, AWEEntertainmentActivityControllerProtocol>

@property (copy, nonatomic) NSArray *currentIds;
@property (copy, nonatomic) NSString *autoShowSchema;
@property (retain, nonatomic) NSMutableDictionary *stateMap;
@property (retain, nonatomic) NSMutableArray *reportFailedArray;
@property (nonatomic) double stateTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)setupObserver;
- (id)stateForActivity:(id)a0;
- (BOOL)shouldShowButtonForActivity:(id)a0 withModel:(id)a1;
- (BOOL)updateStateForActivity:(id)a0 withState:(long long)a1 timeStamp:(double)a2 text:(id)a3;
- (void)recordAutoShowSchema:(id)a0 forAwemeIDs:(id)a1;
- (id)autoRouteSchemaForModel:(id)a0;
- (void)clearSchema;
- (id)textForState:(long long)a0 activity:(id)a1;
- (void)handleStrategyDataModeList:(id)a0;
- (void)showAnimationWithImage:(id)a0 businessID:(id)a1;
- (void)showCaptionWithInfo:(id)a0;
- (void)logShowCaptionWithModel:(id)a0 oriInfo:(id)a1;
- (void)logClickCaptionWithModel:(id)a0 oriInfo:(id)a1 clickType:(id)a2;
- (void)logShowFailedForReason:(id)a0 withModel:(id)a1;
- (id)dicForLogParamWithModel:(id)a0 oriInfo:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
