@class NSData, NSString, NSArray, OMJAspectRatio, MJVocalAdjustmentCache, NSDictionary, OMCProject, MJAssetAnalysisReportInfo, OMJAssetInfo, MJAssetAnalysisReportInfoModel;

@interface MJMovieComposingDraft : NSObject <PBCoding>

@property (retain, nonatomic) NSData *projectData;
@property (retain, nonatomic) NSArray *assetDraftModels;
@property (retain, nonatomic) NSData *aspectRatioData;
@property (retain, nonatomic) NSDictionary *vocalAdjustmentParamsModels;
@property (retain, nonatomic) MJAssetAnalysisReportInfoModel *realShotReportInfoModel;
@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) OMCProject *project;
@property (nonatomic) unsigned long long maasSDKVersion;
@property (nonatomic) BOOL isFromAlbum;
@property (nonatomic) long long entryScene;
@property (retain, nonatomic) NSString *publisherSessionID;
@property (nonatomic) unsigned long long narrationType;
@property (retain, nonatomic) OMJAssetInfo *originAssetInfo;
@property (retain, nonatomic) NSArray *originAssetInfos;
@property (retain, nonatomic) NSArray *originAssets;
@property (retain, nonatomic) OMJAspectRatio *originAspectRatio;
@property (retain, nonatomic) NSData *assetClassifyResult;
@property (retain, nonatomic) MJVocalAdjustmentCache *vocalAdjustmentCache;
@property (retain, nonatomic) MJAssetAnalysisReportInfo *realShotReportInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_isFromAlbum;
+ (void)PBArrayAdd_maasSDKVersion;
+ (void)PBArrayAdd_assetClassifyResult;
+ (void)PBArrayAdd_projectData;
+ (void)PBArrayAdd_assetDraftModels;
+ (void)PBArrayAdd_publisherSessionID;
+ (void)PBArrayAdd_aspectRatioData;
+ (void)PBArrayAdd_entryScene;
+ (void)PBArrayAdd_vocalAdjustmentParamsModels;
+ (void)PBArrayAdd_narrationType;
+ (void)PBArrayAdd_realShotReportInfoModel;
+ (void)initialize;

- (id)getPBPropertyTable;
- (BOOL)prepareBeforePBCoding;
- (BOOL)isMaasSDKVersionCompatible;
- (BOOL)restoreAfterPBCoding;
- (void)fetchOriginAssets;
- (void)saveVocalAdjustmentCache;
- (void)loadVocalAdjustmentCache;
- (void).cxx_destruct;

@end
