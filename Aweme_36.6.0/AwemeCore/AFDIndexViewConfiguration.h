@class UIColor, UIFont;

@interface AFDIndexViewConfiguration : NSObject

@property (retain, nonatomic) UIColor *indexItemBackgroundColor;
@property (retain, nonatomic) UIColor *indexItemTextColor;
@property (retain, nonatomic) UIColor *indexItemSelectedBackgroundColor;
@property (retain, nonatomic) UIColor *indexItemSelectedTextColor;
@property (nonatomic) double indexItemWidth;
@property (nonatomic) double indexItemHeight;
@property (nonatomic) double indexItemRightMargin;
@property (nonatomic) double indexItemSpace;
@property (retain, nonatomic) UIFont *indexItemFont;
@property (retain, nonatomic) UIColor *indicatorBackgroundColor;
@property (retain, nonatomic) UIColor *indicatorTextColor;
@property (nonatomic) double indicatorHeight;
@property (nonatomic) double indicatorRightMargin;
@property (retain, nonatomic) UIFont *indicatorTextFont;
@property (nonatomic) double collectionViewShelterHeight;
@property (nonatomic) double collectionViewHeaderHeight;
@property (nonatomic) double collectionViewSectionHeaderHeight;
@property (nonatomic) long long firstIndexSectionsOffset;

+ (id)defaultConfiguration;

- (void).cxx_destruct;

@end
