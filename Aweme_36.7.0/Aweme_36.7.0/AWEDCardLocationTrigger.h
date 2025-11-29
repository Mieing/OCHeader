@class NSString, NSMutableArray, AWELocationServicePersistModel;
@protocol AWEDCardTriggerDelegateProtocol;

@interface AWEDCardLocationTrigger : NSObject <AWEDCardTriggerProtocol>

@property (retain, nonatomic) AWELocationServicePersistModel *lastPersistModel;
@property (nonatomic) BOOL shuoldPullCollectCard;
@property (nonatomic) BOOL shouldPullPoiCard;
@property (nonatomic) long long waitTime;
@property (retain, nonatomic) NSMutableArray *callBacksArray;
@property (weak, nonatomic) id<AWEDCardTriggerDelegateProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)didSetupTrigger;
- (id)collectCardRequestWithLocation:(id)a0;
- (id)poiCardRequestWithLocation:(id)a0;
- (BOOL)isRequestEnterFromTabId:(id)a0;
- (void)trackPullMsgEventWithError:(id)a0 costTime:(long long)a1;
- (Class)userArriveManager;
- (double)distanceFromCurrentLocation:(id)a0 targetLocation:(id)a1;
- (BOOL)findNodeWithTabId:(id)a0 inTree:(id)a1;
- (void)registerLocationMessage:(id /* block */)a0;
- (void)unregisterLocationMessage:(id /* block */)a0;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
