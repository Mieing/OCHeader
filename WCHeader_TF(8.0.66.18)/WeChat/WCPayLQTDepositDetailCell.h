@class NSString, UILabel, UIView, WCPayCss;

@interface WCPayLQTDepositDetailCell : UITableViewCell

@property (retain) UIView *container;
@property (retain) UILabel *titleLabel;
@property (retain) UILabel *descLabel;
@property (retain) UIView *lineView;
@property (retain) WCPayCss *css;
@property (retain) NSString *title;
@property (retain) NSString *desc;
@property BOOL invaild;

- (void)layoutSubviews;
- (void)updateContainer;
- (void)updateTitle:(id)a0 desc:(id)a1 invaild:(BOOL)a2;
- (void)updateTitleLabel;
- (void)updateDescLabel;
- (void)updateLineView;
- (void).cxx_destruct;

@end
