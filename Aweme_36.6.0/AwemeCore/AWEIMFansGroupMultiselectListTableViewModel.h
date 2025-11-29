@class NSArray, AWEIMBaseListPrepareModel, NSMutableArray;

@interface AWEIMFansGroupMultiselectListTableViewModel : NSObject

@property (copy, nonatomic) NSArray *fansGroupInfoList;
@property (copy, nonatomic) NSArray *fansGroupInfoOriginalFakeModelList;
@property (copy, nonatomic) NSArray *fansGroupInfoFakeModelList;
@property (retain, nonatomic) AWEIMBaseListPrepareModel *fakeModel;
@property (retain, nonatomic) NSMutableArray *selectedModelList;
@property (nonatomic) BOOL hasSelectedAll;

- (void)__setup;
- (id)initWithFansGroupInfoList:(id)a0 selectList:(id)a1;
- (void)selectedListRemoveModel:(id)a0;
- (void)selectedListAddModel:(id)a0;
- (BOOL)selectedListContainsModel:(id)a0;
- (void)selectedAll;
- (void)unSelectedAll;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)title;

@end
