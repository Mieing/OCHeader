@class NSString, NSData;

@interface MMWebOptimizationAuthLiteControlData : MMObject <PBCoding>

@property (nonatomic) unsigned int controlExpiredTime;
@property (nonatomic) BOOL hasAllowanceOfFirstAsyncGetA8Key;
@property (copy, nonatomic) NSString *liteRespUrl;
@property (copy, nonatomic) NSString *liteUrl;
@property (nonatomic) unsigned int ret;
@property (nonatomic) unsigned int antiSpamBit;
@property (nonatomic) unsigned int authBits;
@property (nonatomic) BOOL needAuthState;
@property (nonatomic) BOOL forbidAsyncGetA8key;
@property (nonatomic) unsigned int scene;
@property (nonatomic) BOOL fromKara;
@property (retain, nonatomic) NSData *jsapiControlBytes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_hasAllowanceOfFirstAsyncGetA8Key;
+ (void)PBArrayAdd_liteRespUrl;
+ (void)PBArrayAdd_controlExpiredTime;
+ (void)PBArrayAdd_liteUrl;
+ (void)PBArrayAdd_ret;
+ (void)PBArrayAdd_authBits;
+ (void)PBArrayAdd_antiSpamBit;
+ (void)PBArrayAdd_needAuthState;
+ (void)PBArrayAdd_forbidAsyncGetA8key;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_fromKara;
+ (void)PBArrayAdd_jsapiControlBytes;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
