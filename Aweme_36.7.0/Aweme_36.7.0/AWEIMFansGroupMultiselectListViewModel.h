@class NSString, NSArray, NSMutableArray;

@interface AWEIMFansGroupMultiselectListViewModel : NSObject

@property (nonatomic) BOOL hasHeader;
@property (copy, nonatomic) NSString *multiselectListTitle;
@property (copy, nonatomic) NSArray *fansGroupInfoList;
@property (copy, nonatomic) NSArray *fansGroupInfoFakeModelList;
@property (retain, nonatomic) NSMutableArray *selectedModelList;
@property (nonatomic) BOOL hasSelectedAll;
@property (nonatomic) BOOL hasUnSelectedAll;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL shouldRefresh;
@property (nonatomic) long long selectedModelCount;

- (void)__setup;
- (id)initWithFansGroupInfoList:(id)a0 selectAll:(BOOL)a1;
- (void)selectedListRemoveModel:(id)a0;
- (void)selectedListAddModel:(id)a0;
- (BOOL)selectedListContainsModel:(id)a0;
- (void)selectedAll;
- (void)unSelectedAll;
- (void)checkSelectedModelListStatus;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (long long)numberOfSections;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct CGSize { double x0; double x1; })sizeForItem;

@end
