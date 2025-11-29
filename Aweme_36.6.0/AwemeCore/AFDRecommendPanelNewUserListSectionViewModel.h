@class NSString, AFDRecommendPanelContext, AWEAwemeModel;

@interface AFDRecommendPanelNewUserListSectionViewModel : AWEBaseListSectionViewModel <AFDRecommendPanelContentSectionViewModelProtocol>

@property (retain, nonatomic) AFDRecommendPanelContext *context;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)useCellViewModel;

- (long long)modelsDiffType;
- (void)initializeWithContext:(id)a0;
- (id)cellModelListWithUserList:(id)a0;
- (void)refreshListWithModel:(id)a0;
- (void)refreshListByActionWithModel:(id)a0;
- (double)itemHeightAtIndex:(unsigned long long)a0;
- (double)itemOffsetAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (double)itemWidth;

@end
