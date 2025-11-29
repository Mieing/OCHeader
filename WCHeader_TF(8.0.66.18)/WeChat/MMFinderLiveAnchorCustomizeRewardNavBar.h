@class UILabel, NSString, MMUIButton;

@interface MMFinderLiveAnchorCustomizeRewardNavBar : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) MMUIButton *leftButton;
@property (retain, nonatomic) MMUIButton *rightButton;
@property (copy, nonatomic) id /* block */ leftButtonActionCallback;
@property (copy, nonatomic) id /* block */ rightButtonActionCallback;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *subTitleText;
@property (nonatomic) BOOL rightButtonEnable;

- (id)init;
- (void)layoutSubviews;
- (void)leftButtonAction;
- (void)rightButtonAction;
- (void).cxx_destruct;

@end
