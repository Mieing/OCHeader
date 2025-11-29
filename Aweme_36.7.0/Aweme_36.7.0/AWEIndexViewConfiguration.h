@class UIColor, UIFont;

@interface AWEIndexViewConfiguration : NSObject

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
@property (nonatomic) double tableViewShelterHeight;
@property (nonatomic) double tableViewHeaderHeight;
@property (nonatomic) long long firstIndexSectionsOffset;
@property (nonatomic) BOOL isRTL;

+ (id)configurationWithIndexItemBackgroundColor:(id)a0 indexItemTextColor:(id)a1 indexItemSelectedBackgroundColor:(id)a2 indexItemSelectedTextColor:(id)a3 indexItemWidth:(double)a4 indexItemHeight:(double)a5 indexItemRightMargin:(double)a6 indexItemSpace:(double)a7 indexItemFont:(id)a8 indicatorBackgroundColor:(id)a9 indicatorTextColor:(id)a10 indicatorHeight:(double)a11 indicatorRightMargin:(double)a12 indicatorTextFont:(id)a13 tableViewShelterHeight:(double)a14 tableViewHeaderHeight:(double)a15;
+ (id)configuration;

- (void).cxx_destruct;

@end
