@class NSDictionary, NSMutableArray, NSString;

@interface AWEProfileRewadLynxManager : NSObject <AWEUserProfileRewardLynxProtocol>

@property (retain, nonatomic) NSMutableArray *subscribeList;
@property (retain, nonatomic) NSDictionary *context;
@property (copy, nonatomic) id /* block */ rewardPanelShowBlock;
@property (copy, nonatomic) id /* block */ rewardPanelCloseBlock;
@property (copy, nonatomic) id /* block */ rewardPanelCountUpdateBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)__unregisterSubscriber;
- (void)__registerSubscribes;
- (void)openSchemeWithContext:(id)a0;
- (void)__openSchemaWithParams:(id)a0;
- (id)__configSchemeWithParams:(id)a0;
- (void)__openChargeViewWithInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
