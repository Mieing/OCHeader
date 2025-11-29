@class NSArray, ACCRecommendTemplateInfo, NSString, ACCTemplateRecommendModel;

@interface ACCRepoOneClickFilmingModel : NSObject <ACCRepositoryRequestParamsDeprecated, AWERepositoryDraftProtocol>

@property (retain, nonatomic) ACCTemplateRecommendModel *templateRecommendModel;
@property (retain, nonatomic) NSArray *recommendTemplates;
@property (nonatomic) unsigned long long currentSelectIndex;
@property (copy, nonatomic) NSArray *templateRecommendAssets;
@property (retain, nonatomic) ACCRecommendTemplateInfo *currentRecommendTemplate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
