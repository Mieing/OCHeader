@class AWEHPCombineFrequencyConfig, MMKV, NSString, AWEHPCombineDataModel, NSLock, NSMutableArray;
@protocol AWEHPNetCombineSubscriberAbility;

@interface AWEHPCombineConfigSubscriber : NSObject <AWEHPNetCombineSubscriberProtocol>

@property (retain, nonatomic) AWEHPCombineDataModel *dataModel;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) MMKV *mmkv;
@property (retain, nonatomic) NSMutableArray *blocks;
@property (retain, nonatomic) id<AWEHPNetCombineSubscriberAbility> ability;
@property (nonatomic) BOOL hasLoad;
@property (readonly, nonatomic) AWEHPCombineFrequencyConfig *frequencyConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setupAbility:(id)a0;
- (void)p_tryLoad;
- (void)handleResponse:(id)a0 withRequest:(id)a1;
- (void)getRequestBody:(id)a0 callback:(id /* block */)a1;
- (void)p_handleResponse:(id)a0 withRequest:(id)a1;
- (id)safeGetDataModel;
- (void)p_callSubscriberUpdateBlocks:(id)a0;
- (void)addUpdateBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
