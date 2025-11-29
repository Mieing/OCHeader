@class NSString;
@protocol IESLiveStrategyService;

@interface IESLiveECStrategyServiceIESECBridger : NSObject <IESLiveECStrategyService>

@property (retain, nonatomic) id<IESLiveStrategyService> protoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)a0;
+ (id)bridgedProtocol;

- (void)addStrategyObserver:(id)a0 InFactor:(id)a1 withInputValue:(id)a2;
- (void)removeStrategyObserver:(id)a0;
- (void)addTrackerDelegate;
- (void)removeTrackerDelegate;
- (void)collectEnterFromMerge:(id)a0;
- (void)collectEnterMethod:(id)a0;
- (void)collectEnterAction:(id)a0;
- (void)collectRoomcart:(long long)a0;
- (void)batchCollectInformation:(id)a0;
- (id)getLatestFactor:(id)a0;
- (void).cxx_destruct;

@end
