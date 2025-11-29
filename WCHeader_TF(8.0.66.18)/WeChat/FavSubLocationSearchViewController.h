@class NSString, NSMutableArray;

@interface FavSubLocationSearchViewController : FavBaseSearchViewController <MMFavCellComponentDelegate>

@property (retain, nonatomic) NSMutableArray *arrCityDatas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCellStyle:(unsigned long long)a0 selectedDic:(id)a1 maxSelectedCount:(unsigned long long)a2;
- (void)configRightNavBtn;
- (void)onDone;
- (void)updateAddBtn;
- (void)initData;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)onSelectRowAtIndexPath:(id)a0;
- (void)furtherSearchFilter:(id)a0 withSearchText:(id)a1 withSearchType:(unsigned long long)a2 withTagList:(id)a3;
- (void)onClickTagButtonWithTagName:(id)a0;
- (void)onClickDetailBtnWith:(id)a0;
- (void)onSelectedDataWrap:(id)a0;
- (void)canNotSelecteDueToExceedCount;
- (BOOL)isOnSearch;
- (void).cxx_destruct;

@end
