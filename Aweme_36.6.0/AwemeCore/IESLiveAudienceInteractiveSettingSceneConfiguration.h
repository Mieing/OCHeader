@class UIColor, NSString, UIFont, NSNumber;

@interface IESLiveAudienceInteractiveSettingSceneConfiguration : NSObject

@property (copy, nonatomic) NSString *backgroundColorString;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *selectedBackgroundColor;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ didClick;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL disabled;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) long long layoutType;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *titleColor;
@property (nonatomic) BOOL showPlayingTagWhileSelected;
@property (retain, nonatomic) NSNumber *cornerRadius;

- (void).cxx_destruct;

@end
