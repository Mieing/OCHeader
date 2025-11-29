@class UIColor, UIImage;

@interface AWEHashtagSuggestionViewConfig : NSObject

@property (nonatomic) unsigned long long style;
@property (readonly, nonatomic) long long scrollViewIndicatorStyle;
@property (readonly, nonatomic) double cellHeight;
@property (readonly, nonatomic) UIColor *nameColor;
@property (readonly, nonatomic) UIColor *countColor;
@property (readonly, nonatomic) UIColor *longCountColor;
@property (readonly, nonatomic) UIImage *historyIcon;
@property (readonly, nonatomic) UIColor *loadingImageColor;
@property (readonly, nonatomic) UIColor *loadingTipColor;

- (id)initWithStyle:(unsigned long long)a0;

@end
