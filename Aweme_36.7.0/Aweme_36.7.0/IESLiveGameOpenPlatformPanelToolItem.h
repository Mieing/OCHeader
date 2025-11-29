@class UIColor, NSString, UIImage, UIView;

@interface IESLiveGameOpenPlatformPanelToolItem : IESLiveDynamicModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *accessibilityTitle;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) id /* block */ onClicked;
@property (nonatomic) double itemWidth;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long type;
@property (weak, nonatomic) UIView *relatedView;

- (void).cxx_destruct;

@end
