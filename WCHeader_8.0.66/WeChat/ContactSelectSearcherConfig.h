@class UIColor;

@interface ContactSelectSearcherConfig : NSObject

@property (retain, nonatomic) UIColor *searchFieldColor;
@property (retain, nonatomic) UIColor *searchFieldTextColor;
@property (retain, nonatomic) UIColor *searchPlaceHolderIconColor;
@property (nonatomic) double searchFieldCornerRadius;
@property (nonatomic) double searchBarHeight;
@property (nonatomic) double searchBarWidth;
@property (retain, nonatomic) UIColor *footerTextColor;
@property (retain, nonatomic) UIColor *emptySeperatorColorColor;
@property (nonatomic) BOOL colorProxyUseDarkMode;

- (id)init;
- (void).cxx_destruct;

@end
