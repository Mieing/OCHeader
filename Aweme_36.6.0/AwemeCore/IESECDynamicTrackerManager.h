@class IESECDynamicTrackerObfuscateConfigModel, NSMutableDictionary, NSDictionary, NSString, NSMutableArray, IESECDynamicTrackerConfigModel;

@interface IESECDynamicTrackerManager : NSObject

@property (nonatomic) BOOL isCompletedSetUp;
@property (nonatomic) BOOL useCache;
@property (nonatomic) long long cacheErrorCode;
@property (nonatomic) long long settingsErrorCode;
@property (retain, nonatomic) IESECDynamicTrackerConfigModel *configModel;
@property (retain, nonatomic) IESECDynamicTrackerObfuscateConfigModel *obfuscateConfigModel;
@property (retain, nonatomic) NSMutableDictionary *collectionDataMap;
@property (retain, nonatomic) NSDictionary *collectionData;
@property (retain, nonatomic) NSMutableArray *hashKeyList;
@property (copy, nonatomic) NSString *errorCode;
@property (copy, nonatomic) NSString *encryptedErrorCode;
@property (nonatomic) BOOL hasError;
@property (retain, nonatomic) NSMutableArray *exchangeOrderList;
@property (copy, nonatomic) NSString *originCollectionDataString;
@property (copy, nonatomic) NSString *encryptedCollectionDataString;

+ (id)shared;

- (void)decryptConfigModel;
- (void)decryptObfuscateConfigModel;
- (void)encryptErrorCode;
- (void)initCollectionData;
- (void)initHashKeyList;
- (void)checkConfigIsLegal;
- (void)initCollectionDataString;
- (id)appInstallDate;
- (id)getTeamIdentifier;
- (void)checkParameterIsLegal;
- (void)checkHashIsLegal;
- (void)checkCollectionDataKeyIsLegal;
- (void)useCacheConfig;
- (BOOL)decryptConfigModelWithConfigString:(id)a0 error:(id)a1;
- (BOOL)decryptObfuscateConfigModelWithConfigString:(id)a0 error:(id)a1;
- (id)randomHexStringWithLength:(unsigned long long)a0;
- (id)generateErrorInfoWithEvent:(id)a0;
- (id)encryptDynamicTrackerString:(id)a0 withHashAlgorithm:(id)a1;
- (id)generateDynamicTrackerWithEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setup;
- (id)ipAddress;

@end
