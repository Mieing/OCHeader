@class UIColor, NSString, UIImage, AWEIMChatPanelBadgeViewModel, AWEIMPlatformChatPanelModel;

@interface AWEIMChatPanelModel : NSObject

@property (nonatomic) unsigned long long platformModelType;
@property (copy, nonatomic) NSString *labelText;
@property (retain, nonatomic) UIImage *buttonImage;
@property (nonatomic) BOOL isUnavailable;
@property (retain, nonatomic) AWEIMPlatformChatPanelModel *platformChatPanelModel;
@property (retain, nonatomic) AWEIMChatPanelBadgeViewModel *badgeVM;
@property (retain, nonatomic) UIColor *iconTintColorDark;
@property (retain, nonatomic) UIColor *iconTintColorLight;
@property (retain, nonatomic) UIColor *backgroundColorDark;
@property (retain, nonatomic) UIColor *backgroundColorLight;
@property (copy, nonatomic) id /* block */ didSelectedAction;
@property (copy, nonatomic) id /* block */ didShownAction;
@property (nonatomic) unsigned long long modelType;

- (void)setIconTintColorWithIESIMColor:(long long)a0;
- (void)setBackgroundColorWithIESIMColor:(long long)a0;
- (id)initWithDefault;
- (void).cxx_destruct;
- (id)backgroundColor;
- (id)iconTintColor;

@end
