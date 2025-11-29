@class UIColor, NSString, AWEIMIncentiveChatMsgCardUISkinConfig, NSArray, AWEIMAvatarProps;

@interface AWEIMIncentiveChatContentProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ tapBlock;
@property (copy, nonatomic) id /* block */ tapSubtitleBlock;
@property (nonatomic) BOOL disableBtn;
@property (nonatomic) unsigned long long currentStatus;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (nonatomic) unsigned long long cardStyle;
@property (copy, nonatomic) NSString *titleStr;
@property (copy, nonatomic) NSString *subTitleStr;
@property (copy, nonatomic) NSString *subtitleSchema;
@property (copy, nonatomic) NSString *btnTitleStr;
@property (retain, nonatomic) UIColor *btnTitleColor;
@property (retain, nonatomic) UIColor *btnBackgroundColor;
@property (retain, nonatomic) AWEIMIncentiveChatMsgCardUISkinConfig *lightUIConfig;
@property (retain, nonatomic) AWEIMIncentiveChatMsgCardUISkinConfig *darkUIConfig;
@property (copy, nonatomic) NSString *iconName;
@property (copy, nonatomic) NSArray *iconUrlArray;
@property (retain, nonatomic) AWEIMAvatarProps *leftAvatarProps;
@property (retain, nonatomic) AWEIMAvatarProps *rightAvatarProps;

- (void).cxx_destruct;

@end
