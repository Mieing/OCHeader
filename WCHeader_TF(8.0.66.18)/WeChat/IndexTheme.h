@class IndexTheme_FooterTheme, IndexTheme_TopBannerTheme, IndexTheme_NavBarTheme;

@interface IndexTheme : WXPBGeneratedMessage

@property (retain, nonatomic) IndexTheme_TopBannerTheme *topBanner;
@property (retain, nonatomic) IndexTheme_NavBarTheme *navBar;
@property (retain, nonatomic) IndexTheme_FooterTheme *footer;

+ (void)initialize;

@end
