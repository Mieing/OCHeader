@class NSString, NSDictionary, NSMutableDictionary, NSArray, AWEIMActivityDynamicResourceResponseModel;

@interface AWEIMActivityDynamicResourceManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy, nonatomic) NSString *redPacketTitle;
@property (copy, nonatomic) NSString *fansCreatorRedPacketTitle;
@property (retain, nonatomic) NSDictionary *textAnimateRegularToResourceDictionary;
@property (nonatomic) long long liteEmojiCount;
@property (retain, nonatomic) NSDictionary *textAnimateRegularToIDDictionary;
@property (retain, nonatomic) NSDictionary *liteEmojiIDToModelDictionary;
@property (retain, nonatomic) NSMutableDictionary *liteEmojiURLToJsonlDictionary;
@property (retain, nonatomic) NSMutableDictionary *downloadStatus;
@property (nonatomic) BOOL hasFetchedSettingsInThisLife;
@property (nonatomic) BOOL isFetchingSettings;
@property (nonatomic) double lastUpdate;
@property (retain, nonatomic) AWEIMActivityDynamicResourceResponseModel *model;
@property (copy, nonatomic) NSString *p_resourceDirectory;
@property (nonatomic) long long p_APIRequireDeltaTime;
@property (retain, nonatomic) NSDictionary *textAnimateIDToResourceDictionary;
@property (retain, nonatomic) NSDictionary *fallingAnimateIDToResourceDictionary;
@property (retain, nonatomic) NSArray *specialTextAnimateIDToResourceArr;
@property (retain, nonatomic) NSDictionary *resourceIDToVideoAnimationModelDictionary;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)tickleResourceConfs;
- (BOOL)fetchSettingsWithContext:(id)a0 force:(BOOL)a1;
- (void)matchLiteEmojiForAttributedString:(id)a0 font:(id)a1;
- (void)p_afterModelUpdate;
- (id)p_resConfigDictionary;
- (BOOL)p_tryBeginChangeToIsFetching;
- (BOOL)p_tryEndChangeToNotFetching;
- (void)p_trackModelStatusWithResponseModel:(id)a0 error:(id)a1;
- (void)p_updateChatThemeListDataWithModel:(id)a0;
- (id)lottieJsonByURL:(id)a0;
- (id)p_generateLiteEmojiFinalPathWithKey:(id)a0;
- (void)p_downloadLiteEmojiJson:(id)a0;
- (void)p_preloadLightInteractionData;
- (id)p_generateLiteEmojiDownloadPathWithKey:(id)a0;
- (id)__resourceDirectory;
- (void)__callBackOnMainThreadWithCompletion:(id /* block */)a0 filePathString:(id)a1 error:(id)a2;
- (void)__removeFileAtPathIfNeeded:(id)a0;
- (BOOL)__isfileExistingAtPath:(id)a0;
- (id)liteEmojiMessageByID:(id)a0;
- (id)liteEmojiMessageByBackupURL:(id)a0;
- (id)lottieJsonByID:(id)a0;
- (id)actionBarConfigs;
- (id)lightInteractionConfigs;
- (id)lightInteractionConfigsV2;
- (void)fetchAndUnzipFileForURLString:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
