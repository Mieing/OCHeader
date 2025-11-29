@class UIColor, AWESearchScanGraphicSearchBar;

@interface AWESearchScanGraphicSugViewControllerConfig : NSObject

@property (nonatomic) BOOL supportDarkTheme;
@property (retain, nonatomic) AWESearchScanGraphicSearchBar *searchBar;
@property (nonatomic) unsigned long long cellStyle;
@property (retain, nonatomic) UIColor *backgroundColor;

- (void).cxx_destruct;
- (id)init;

@end
