@class UIColor, AWEIMAvatarProps;

@interface AWEIMDoubleAvatarPresenterProps : AWEIMUIViewPresenterProps

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) AWEIMAvatarProps *leftAvatarProps;
@property (retain, nonatomic) AWEIMAvatarProps *rightAvatarProps;
@property (retain, nonatomic) UIColor *avatarBorderColor;
@property (nonatomic) double avatarBorderWidth;
@property (nonatomic) double avatarWidthHeight;
@property (nonatomic) double centerOffset;

- (void).cxx_destruct;

@end
