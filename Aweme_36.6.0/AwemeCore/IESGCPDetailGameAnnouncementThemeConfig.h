@class UIColor, NSString;

@interface IESGCPDetailGameAnnouncementThemeConfig : NSObject

@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double backgroundRadius;
@property (copy, nonatomic) NSString *announcementIconName;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSString *indicatorIconName;
@property (nonatomic) double indicatorIconAlpha;

+ (id)detailDarkThemeConfig;
+ (id)detailLightThemeConfig;
+ (id)announcementThemeConfigFrom:(id)a0;

- (void).cxx_destruct;

@end
