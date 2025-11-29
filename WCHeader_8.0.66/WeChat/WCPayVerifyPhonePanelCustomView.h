@class UILabel, NSString;

@interface WCPayVerifyPhonePanelCustomView : UIView

@property (retain) UILabel *titleLabel;
@property (retain) UILabel *descLabel;
@property (retain) NSString *title;
@property (retain) NSString *desc;

- (void)layoutSubviews;
- (void)updateTitleLabel;
- (void)updateDescLabel;
- (void).cxx_destruct;

@end
