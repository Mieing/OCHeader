@class UIColor, AWEIMUIImageViewPresenterProps;

@interface IESIMGroupAvatarPresenterProps : AWEIMUIViewPresenterProps

@property (retain, nonatomic) AWEIMUIImageViewPresenterProps *avatarProps;
@property (retain, nonatomic) UIColor *avatarBackgroundColor;
@property (nonatomic) double avatarSize;
@property (nonatomic) double avatarBorderSize;

- (void).cxx_destruct;

@end
