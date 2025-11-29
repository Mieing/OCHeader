@class UIFont;

@interface MMFinderLiveMultiPriceViewConfig : NSObject

@property (nonatomic) unsigned long long colorStyle;
@property (retain, nonatomic) UIFont *normalCurrentPriceFont;
@property (retain, nonatomic) UIFont *minCurrentPriceFont;
@property (retain, nonatomic) UIFont *currentPriceDescriptionFont;
@property (retain, nonatomic) UIFont *currentPriceSuffixFont;
@property (retain, nonatomic) UIFont *listPriceFont;
@property (retain, nonatomic) UIFont *priceSuffixDescriptionFont;

- (void).cxx_destruct;

@end
