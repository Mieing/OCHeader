@class NSString;

@interface WAAppBrandPluginNotifyInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSString *appid;
@property (nonatomic) BOOL isAlreadyDownload;
@property (nonatomic) unsigned int debugDevKey;
@property (retain, nonatomic) NSString *versionDesc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_appid;
+ (void)PBArrayAdd_isAlreadyDownload;
+ (void)PBArrayAdd_debugDevKey;
+ (void)PBArrayAdd_versionDesc;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
