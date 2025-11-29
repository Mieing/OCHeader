@class NSMutableDictionary, NSArray, NSMutableSet, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AWEFeedPreciseDowngradeManager : NSObject <AWEFeedPreciseDowngradeManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *apiErrorDataArrayDictionary;
@property (retain, nonatomic) NSMutableDictionary *apiErrorConfigDictionary;
@property (retain, nonatomic) NSMutableSet *allowdApiKeysSet;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dicWriteQueue;
@property (nonatomic) BOOL enable;
@property (retain, nonatomic) NSArray *disabledPathArray;
@property (nonatomic) BOOL useDescriptionGenerateJson;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)getValidErrorListStringForKey:(id)a0;
- (void)addErrorInfo:(id)a0 timestamp:(double)a1 provider:(id)a2 imprId:(id)a3 forAPIKey:(id)a4;
- (void)configAllowedApiKeysSet;
- (void)configDefaultParametersforAPIKey:(id)a0;
- (id)getErrorConfigForKey:(id)a0;
- (id)getErrorDataArrayForKey:(id)a0;
- (void)removeExpireAndOverLongDataForKey:(id)a0;
- (id)realGetValidErrorListStringForKey:(id)a0;
- (id)buildDictinaryWithErrorData:(id)a0;
- (void)configCapacity:(long long)a0 expireTimeDuration:(double)a1 errorCodeMaxCount:(long long)a2 forAPIKey:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end
