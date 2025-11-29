@class NSString, IESIMEmoticonResourceModel, NSBundle, IESIMEmoticonConfig, NSMutableArray;

@interface IESIMEmoticonResourceManager : NSObject

@property (nonatomic) BOOL useDownloadEmojiBundle;
@property (nonatomic) long long fetchStatus;
@property (nonatomic) long long fetchReason;
@property (retain, nonatomic) IESIMEmoticonResourceModel *resourceModel;
@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSString *updatedResourceMD5;
@property (copy) NSString *rscPath;
@property (copy) NSString *descPath;
@property (retain, nonatomic) NSBundle *localResourceBundle;
@property (nonatomic) BOOL hasReportLost;
@property (retain, nonatomic) NSMutableArray *reportLostBlocks;
@property (retain, nonatomic) IESIMEmoticonConfig *config;
@property (nonatomic) long long resourceVersion;

+ (id)sharedInstance;

- (void)fetchLittleEmoticonResourceWithContext:(id)a0;
- (void)reportResourceLostWithContext:(id)a0 withEmoticonText:(id)a1 iconName:(id)a2;
- (id)resourceZipPath;
- (void)p_removeFileAtPathIfNeeded:(id)a0;
- (id)emoticonResourcePath;
- (BOOL)isUseDownloadEmojiBundle;
- (id)emoticonDescPath;
- (void)forceSetupPath;
- (id)emoticonMD5;
- (void)p_setupPath;
- (void)p_fetchApiIfNeededWithContext:(id)a0;
- (void)p_fetchResource;
- (BOOL)p_isFileExistingAtPath:(id)a0;
- (id)resourcePathWithMD5:(id)a0;
- (void)p_updateResourceDir:(id)a0 withMD5:(id)a1;
- (BOOL)p_resourceDirValid:(id)a0;
- (id)p_rscPath;
- (id)p_descPath;
- (void)p_debugToastWithStr:(id)a0;
- (void)p_cleanOutdatedResourceDirs:(id)a0;
- (void)p_reportAllLostsWithScene:(id)a0;
- (void)p_shouldSkipFetchApiWithCompletion:(id /* block */)a0;
- (id)tmpResourcePathWithMD5:(id)a0;
- (void)p_syncDeleteUnusedImagesOfRootPath:(id)a0;
- (void)p_reloadResourceWithMD5:(id)a0;
- (id)p_littleEmoticonResourceRoot;
- (id)p_encodeMD5ToDirName:(id)a0;
- (BOOL)p_moveFileAtPath:(id)a0 toPath:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)clearCache;

@end
