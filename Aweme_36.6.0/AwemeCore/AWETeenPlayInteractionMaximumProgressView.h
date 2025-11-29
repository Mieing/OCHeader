@class UIImageView, UILabel, NSString;

@interface AWETeenPlayInteractionMaximumProgressView : UIView <AWETeenPlayInteractionProgressHelperObserver>

@property (retain, nonatomic) UIImageView *progressDividingLine;
@property (retain, nonatomic) UILabel *progressLeftLabel;
@property (retain, nonatomic) UILabel *progressRightLabel;
@property (nonatomic) BOOL isFontStyleNormal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
