@class AWETemplateListTemplateInfoResponseModel, NSString, NSDictionary, NSArray, AWEImageTemplateListDataTransfomer, NSObject, NSIndexPath;
@protocol OS_dispatch_group;

@interface AWEImageTemplateEditViewModel : ACCEditViewModel <AWEImageTemplateDataProtocol>

@property (retain, nonatomic) AWEImageTemplateListDataTransfomer *modelDataHelper;
@property (copy, nonatomic) NSString *imageTemplateDir;
@property (copy, nonatomic) NSString *draftDir;
@property (copy, nonatomic) NSString *insertTemplateID;
@property (copy, nonatomic) NSDictionary *commonParams;
@property (copy, nonatomic) NSObject<OS_dispatch_group> *fetchTemplateListGroup;
@property (readonly, copy, nonatomic) NSString *templateIDInDraftModel;
@property (nonatomic) BOOL shouldInsertTemplateAtFirst;
@property (copy, nonatomic) NSDictionary *authorAvatar;
@property (copy, nonatomic) NSDictionary *commonTrackParams;
@property (retain, nonatomic) NSIndexPath *lastSelectedTemplateIndexPath;
@property (retain, nonatomic) NSIndexPath *currentSelectedTemplateIndexPath;
@property (retain, nonatomic) NSIndexPath *lastExportTemplateIndexPath;
@property (nonatomic) double timeWhenStartApplyTemplate;
@property (nonatomic) long long allowTemplateType;
@property (retain, nonatomic) NSArray *templateCategoriesArray;
@property (retain, nonatomic) NSArray *imageTemplatesArray;
@property (retain, nonatomic) AWETemplateListTemplateInfoResponseModel *insertTemplateModel;
@property (copy, nonatomic) id /* block */ fetchTemplateListPannelResponseCallBack;
@property (copy, nonatomic) id /* block */ fetchTemplateListCategoryResponseCallBack;
@property (copy, nonatomic) id /* block */ fetchInsertTemplateInfoCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearDownloadedCache;
+ (id)getTemplateUnzipPathWithTemplateID:(id)a0;
+ (id)getTemplateInfoModelArrayFrom:(id)a0;
+ (void)clearImageTemplateCache;

- (void)fetchDefaultTemplateDataWithShouldInsertTemplateAtFirst:(BOOL)a0 insertTemplateModelID:(id)a1;
- (void)fetchInsertTemplateInfoWithTemplateID:(id)a0;
- (void)fetchTemplateDataWithcurrentImageURI:(id)a0 cropImageInfo:(id)a1;
- (long long)templateScene;
- (void)fetchTemplateDataWithcurrentImageURI:(id)a0 cropImageInfo:(id)a1 shouldInsertTemplateAtFirst:(BOOL)a2 insertTemplateModelID:(id)a3;
- (void)processTemplates:(id)a0 categories:(id)a1 needFilterCategoryArray:(BOOL)a2;
- (id)requestedTemplateCategoriesArray;
- (void)getOnlyFirstTabTemplateDataListWith:(id)a0;
- (void)getFinalTemplateListDataWith:(id)a0;
- (void)fetchCategoryResponseModelForTemplateDataWithCategoryArray:(id)a0;
- (void)refreshTemplatesDataForAllowType;
- (id)getTemplateInfoModelWithIndexPath:(id)a0;
- (id)templateListForCategory:(long long)a0;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (id)currentImage;
- (void)dealloc;
- (void)setup;

@end
