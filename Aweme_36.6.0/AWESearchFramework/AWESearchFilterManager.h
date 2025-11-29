@class NSNumber, NSMutableDictionary, NSArray;

@interface AWESearchFilterManager : NSObject

@property (nonatomic) BOOL shouldRequestFilter;
@property (nonatomic) BOOL hideFilter;
@property (retain, nonatomic) NSNumber *redDotTimeStamp;
@property (retain, nonatomic) NSMutableDictionary *preNotFilterParams;
@property (retain, nonatomic) NSArray *sections;
@property (copy, nonatomic) id /* block */ onFilterReload;

+ (id)preGetFilterParams;

- (BOOL)getIsFilteredSearch;
- (id)getFilterParams;
- (void)initWithDefault;
- (BOOL)getShouldShowFilter;
- (BOOL)getShouldHideHistoryResult;
- (BOOL)getHasRedDotItem;
- (void)updateWithExtraModel:(id)a0;
- (void)showHistoryPopupIfNeeded;
- (BOOL)getShouldShowFullHistoryBlock;
- (unsigned long long)filterHintType;
- (void)updateForceWithSectionModelArray:(id)a0;
- (void)updateForceWithExtraModel:(id)a0;
- (BOOL)getIsHistorySelected;
- (BOOL)isSelectedWithSectionName:(id)a0 andItem:(id)a1;
- (void)updateWithSectionModelArray:(id)a0;
- (void)addRedDotStorageWithSection:(long long)a0 itemIndex:(long long)a1;
- (BOOL)getShouldInit;
- (id)fetchGeneralFilterParams;
- (id)getPreNotFilterParams;
- (id)getCommonFilterParams;
- (void)setIconRedDotState;
- (BOOL)getShouldRequestFilter;
- (void).cxx_destruct;
- (id)init;
- (void)updateSections:(id)a0;

@end
