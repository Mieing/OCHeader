@class AWETemplateListCategoryResponseModel, NSArray, NSMutableDictionary, NSIndexPath;

@interface AWENewVideoCoverEditTemplateViewModel : AWENewCoverEditImageTemplateViewModel

@property (retain, nonatomic) NSMutableDictionary *editCommonTrackParams;
@property (retain, nonatomic) NSArray *originImageTemplatesArray;
@property (retain, nonatomic) NSArray *originTemplateCategoriesArray;
@property (retain, nonatomic) AWETemplateListCategoryResponseModel *historyCategoryResponseModel;
@property (nonatomic) BOOL needTemplateHistory;
@property (copy, nonatomic) NSArray *historyTemplateList;
@property (copy, nonatomic) NSArray *recommendTemplateList;
@property (retain, nonatomic) NSIndexPath *currentSelectedHistoryIndexPath;
@property (retain, nonatomic) NSIndexPath *lastSelectedHistoryIndexPath;
@property (nonatomic) BOOL isSelectedHistory;
@property (nonatomic) BOOL lastIsSelectedHistory;
@property (nonatomic) BOOL isHistoryEmpty;
@property (nonatomic) long long indexOffset;

- (id)commonTrackParams;
- (long long)templateScene;
- (void)processTemplates:(id)a0 categories:(id)a1 needFilterCategoryArray:(BOOL)a2;
- (id)requestedTemplateCategoriesArray;
- (void)refreshTemplatesDataForAllowType;
- (id)getTemplateInfoModel;
- (void)fetchHistoryTemplateListCompletion:(id /* block */)a0;
- (id)get:(id)a0 params:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3;
- (id)post:(id)a0 params:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
