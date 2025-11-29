@class NSString, MiaoJianShareParams;

@interface MiaoJianShareConfigure : NSObject

@property (retain, nonatomic) NSString *appstoreUrl;
@property (retain, nonatomic) NSString *scheme;
@property (retain, nonatomic) MiaoJianShareParams *shareParams;
@property (readonly, nonatomic) unsigned long long scene;

+ (BOOL)takePhotoEntranceEnable;
+ (BOOL)longVideoEntranceEnable;
+ (BOOL)isMiaoJianAppInstalled;
+ (BOOL)isMiaoJianAppId:(id)a0;
+ (id)configureWithScene:(unsigned long long)a0;
+ (id)configureWithScene:(unsigned long long)a0 shareParams:(id)a1;

- (id)initWithScene:(unsigned long long)a0 shareParams:(id)a1;
- (void)commentInit;
- (void)updateParams:(id)a0;
- (id)description;
- (id)_generateUniversalLinkUrl;
- (id)_generateAppstoreUrl;
- (void).cxx_destruct;

@end
