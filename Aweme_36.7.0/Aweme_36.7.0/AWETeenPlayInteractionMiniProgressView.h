@class UIImageView, UILabel, NSString;

@interface AWETeenPlayInteractionMiniProgressView : UIView <AWETeenPlayInteractionProgressHelperObserver>

@property (retain, nonatomic) UIImageView *progressDividingLine;
@property (retain, nonatomic) UILabel *progressLeftLabel;
@property (retain, nonatomic) UILabel *progressRightLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)progressValueChanged:(double)a0 currentDuration:(id)a1 totalDuration:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
