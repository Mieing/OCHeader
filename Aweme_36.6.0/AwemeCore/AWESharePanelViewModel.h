@class NSString, NSArray, AWEAwemeModel, NSDictionary, AWEAwemeLongPressDownloadFunctionModel, AWEShareContext;

@interface AWESharePanelViewModel : NSObject

@property (nonatomic) unsigned long long panelType;
@property (copy, nonatomic) NSString *shareTitle;
@property (copy, nonatomic) NSString *dismissTitle;
@property (nonatomic) BOOL shareTitleIsDisabled;
@property (copy, nonatomic) NSArray *firstRowItems;
@property (copy, nonatomic) NSArray *secondRowItems;
@property (copy, nonatomic) NSString *fromGroupID;
@property (nonatomic) BOOL needShowTranspondList;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEShareContext *context;
@property (retain, nonatomic) AWEAwemeLongPressDownloadFunctionModel *currentExposeExternalShareModel;
@property (retain, nonatomic) NSDictionary *exposeExternalShareModelsDict;
@property (nonatomic) long long currentExposeExternalSharePlatform;

- (id)fetchExternalShareEventContext;
- (id)allShareTypes;
- (BOOL)shouldHideExternalShare;
- (id)filteredLongPressFunctionModels:(id)a0;
- (BOOL)shouldShowToken;
- (BOOL)isHostUser;
- (void)tweakExposedExternalSharePositionIfNeeded:(id)a0 downloadModel:(id)a1 downloadCompletion:(id /* block */)a2 copyCommandCompletion:(id /* block */)a3;
- (void)tweakExternalSharePosition:(id)a0 externalShareModel:(id)a1 douPlusModel:(id)a2 permissionModel:(id)a3;
- (id)offsiteShareTypesAfterExposing;
- (BOOL)shouldSkipWechatOrQQ:(id)a0;
- (BOOL)shouldShowCopyCommandOnExternalShare;
- (BOOL)isExposedExternalShareWithModel:(id)a0;
- (BOOL)shouldExposeCopyCommand;
- (void).cxx_destruct;

@end
