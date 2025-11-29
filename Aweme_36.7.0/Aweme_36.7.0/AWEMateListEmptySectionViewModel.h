@interface AWEMateListEmptySectionViewModel : AWEBaseListSectionViewModel

@property (nonatomic) BOOL isSearching;
@property (nonatomic) BOOL hasRecommendSection;
@property (nonatomic) long long emptyStyle;
@property (nonatomic) long long cardGuideType;
@property (nonatomic) BOOL isTipCardShowing;

- (void)updateTipCardShowing:(BOOL)a0;
- (void)updateEmptyStyle;
- (id)subtitle;
- (id)title;

@end
