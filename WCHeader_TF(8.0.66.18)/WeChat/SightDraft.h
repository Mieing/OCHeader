@class NSMutableDictionary, WCMomentsTemplateInfo, MMImageExifLogInfo, NSDictionary, WCEditVideoPostReportInfo, WCSightVideoCompositeTask, NSMutableArray, VideoUploadStatInfo, NSString, WCFinderVideoQualityScoreModel, NSArray, NSData, NSError, MJMovieTemplateInfo;

@interface SightDraft : MMObject <PBCoding, NSCoding>

@property (retain, nonatomic) MJMovieTemplateInfo *mj_movieTemplateInfo;
@property (retain, nonatomic) NSString *mj_originVideoFilePath;
@property (copy, nonatomic) NSArray *MomentsTemplate_originalAssetsIDs;
@property (retain, nonatomic) WCMomentsTemplateInfo *moments_templateInfo;
@property (retain, nonatomic) NSMutableDictionary *serializableExtMap;
@property (retain, nonatomic) NSData *serializableExtMapData;
@property (retain, nonatomic) NSString *RISKY_savedSightCompositeTaskId;
@property (retain, nonatomic) WCSightVideoCompositeTask *cachedSightCompositeTask;
@property (nonatomic) int draftID;
@property (retain, nonatomic) NSMutableArray *itemAry;
@property (nonatomic) int date;
@property (nonatomic) int sourceForSNSUploadStat;
@property (retain, nonatomic) WCEditVideoPostReportInfo *reportInfo;
@property (retain, nonatomic) VideoUploadStatInfo *uploadStatInfo;
@property (retain, nonatomic) MMImageExifLogInfo *exifLogInfo;
@property (copy, nonatomic) NSString *aigcContent;
@property (retain, nonatomic) WCFinderVideoQualityScoreModel *videoScoreModel;
@property (retain, nonatomic) NSMutableDictionary *userInfo;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *draftItemVideoPath;
@property (nonatomic) BOOL isUseFFmpegHevcEncoding;
@property (nonatomic) BOOL isJustExport;
@property (nonatomic) BOOL isUseCacheCompressResult;
@property (retain, nonatomic) NSDictionary *cameraEditorLogInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_draftID;
+ (void)PBArrayAdd_itemAry;
+ (void)PBArrayAdd_date;
+ (void)PBArrayAdd_serializableExtMapData;
+ (void)PBArrayAdd_RISKY_savedSightCompositeTaskId;
+ (void)PBArrayAdd_cameraEditorLogInfo;
+ (void)initialize;
+ (id)draftWithVideoURL:(id)a0;
+ (id)draftWithVideoURL:(id)a0 andPathPrefix:(id)a1;
+ (id)draftWithVideoURL:(id)a0 thumbImage:(id)a1;

- (void)saveToPhotoLibrary;
- (void)saveToPhotoLibraryWithTips:(BOOL)a0;
- (void)saveToPhotoLibraryWithTips:(BOOL)a0 completion:(id /* block */)a1;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void)dealloc;
- (void)addItem:(id)a0;
- (void)addItem:(id)a0 pathPrefix:(id)a1;
- (id)getItem:(unsigned long long)a0;
- (BOOL)isSightResourceValid;
- (void)setSerializableExt:(id)a0 forKey:(id)a1;
- (void)removeSerializableExtForKey:(id)a0;
- (id)serializableExtForKey:(id)a0;
- (void)setCachedSightCompositeTask:(id)a0 atIndex:(long long)a1;
- (id)getCachedSightCompositeTaskAtIndex:(long long)a0;
- (void)removeCachedSightCompositeTaskAtIndex:(long long)a0;
- (void).cxx_destruct;

@end
