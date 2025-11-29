@class NSString, UIColor;

@interface IESLiveAudienceInteractEntraceConfiguration : NSObject

@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL showTip;
@property (nonatomic) BOOL disabled;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ didClick;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double gradientEndAlpha;
@property (retain, nonatomic) UIColor *backgroundUIColor;
@property (copy, nonatomic) NSString *selectedIcon;
@property (nonatomic) long long type;

- (void).cxx_destruct;

@end
