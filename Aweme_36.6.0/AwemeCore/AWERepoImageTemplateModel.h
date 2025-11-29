@class NSString, NSArray, AWETemplateListTemplateInfoResponseModel;

@interface AWERepoImageTemplateModel : NSObject <ACCRepoDataDiff, AWERepositoryDraftProtocol, ACCRepositoryDraftContextDeprecated, ACCRepositoryTrackContextDeprecated, ACCRepositoryRequestParamsDeprecated>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *templateList;
@property (nonatomic) BOOL didEdit;
@property (copy, nonatomic) AWETemplateListTemplateInfoResponseModel *editorTemplateModel;
@property (nonatomic) BOOL isFromTemplateAnchor;
@property (readonly, nonatomic) BOOL hasEditorTemplate;
@property (nonatomic) unsigned long long templateRequestDetailStatus;
@property (nonatomic) BOOL templateHasApplyed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (id)acc_referExtraParams;
- (id)editDiffs;
- (void)draftWillBeSavedWithID:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
