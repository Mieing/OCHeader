@class AMapFoundationKeychainManager, NSString;

@interface AMapADIUManager : NSObject

@property (retain, nonatomic) AMapFoundationKeychainManager *keyChainManager;
@property BOOL isRequesting;
@property (copy, nonatomic) NSString *gA_DIU;

+ (id)sharedInstance;

- (void)requestADIU;
- (void)saveWithADIU:(id)a0;
- (void)processWithResponseData:(id)a0;
- (id)ADIU;
- (void).cxx_destruct;
- (id)init;

@end
