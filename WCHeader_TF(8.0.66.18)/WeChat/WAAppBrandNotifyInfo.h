@class NSString, WAAppBrandNotifyModuleInfo, WAAppBrandNotifyLoadingImgInfo, NSMutableArray;

@interface WAAppBrandNotifyInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *debugURL;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int debugStartTime;
@property (nonatomic) unsigned int debugEndTime;
@property (nonatomic) BOOL isAlreadyDownload;
@property (retain, nonatomic) NSString *checkSum;
@property (nonatomic) unsigned int from;
@property (retain, nonatomic) WAAppBrandNotifyModuleInfo *moduleInfo;
@property (nonatomic) unsigned int debugDevKey;
@property (retain, nonatomic) NSString *deviceOrientation;
@property (retain, nonatomic) WAAppBrandNotifyLoadingImgInfo *loadingImgInfo;
@property (retain, nonatomic) NSString *clientJsExtInfoString;
@property (retain, nonatomic) NSString *withoutLibMd5;
@property (retain, nonatomic) NSMutableArray *arrPluginCodeInfo;
@property (retain, nonatomic) NSString *withoutLibUrl;
@property (retain, nonatomic) NSMutableArray *arrWidgetInfo;
@property (nonatomic) unsigned int withoutToast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_appid;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_debugURL;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_debugStartTime;
+ (void)PBArrayAdd_debugEndTime;
+ (void)PBArrayAdd_isAlreadyDownload;
+ (void)PBArrayAdd_checkSum;
+ (void)PBArrayAdd_from;
+ (void)PBArrayAdd_moduleInfo;
+ (void)PBArrayAdd_debugDevKey;
+ (void)PBArrayAdd_deviceOrientation;
+ (void)PBArrayAdd_clientJsExtInfoString;
+ (void)PBArrayAdd_loadingImgInfo;
+ (void)PBArrayAdd_withoutLibMd5;
+ (void)PBArrayAdd_arrPluginCodeInfo;
+ (void)PBArrayAdd_withoutLibUrl;
+ (void)PBArrayAdd_arrWidgetInfo;
+ (void)initialize;

- (id)getPBPropertyTable;
- (BOOL)isDebugPackageValidWithCurrentTime:(unsigned int)a0;
- (void)updateInfoWithPackageExtInfo:(id)a0;
- (void)markModule:(id)a0 isDownloaded:(BOOL)a1 checkSum:(id)a2;
- (void)clearDownloadState;
- (id)arrPluginCodeInfoJSONDictionary;
- (id)arrWidgetInfoJSONDictionary;
- (void).cxx_destruct;

@end
