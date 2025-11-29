@class NSString, NSAttributedString;

@interface IESGCPDetailTitleScoreInfoThemeConfig : NSObject

@property (nonatomic) long long themeType;
@property (retain, nonatomic) NSAttributedString *scoreAttributeText;
@property (retain, nonatomic) NSString *scoreImageName;
@property (nonatomic) struct CGSize { double width; double height; } scoreImageSize;
@property (nonatomic) double scoreImageTitleMargin;

- (void).cxx_destruct;

@end
