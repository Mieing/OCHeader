@class UILabel, NSString, WCPayCss;

@interface WCPayTransferPhoneHistoryRcvrCell : UITableViewCell

@property (retain) UILabel *titleLabel;
@property (retain) UILabel *descLabel;
@property (retain) WCPayCss *css;
@property (retain) NSString *title;
@property (retain) NSString *desc;
@property BOOL invaild;

- (void)layoutSubviews;
- (void)updateTitle:(id)a0 desc:(id)a1 invaild:(BOOL)a2;
- (void)updateTitleLabel;
- (void)updateDescLabel;
- (void).cxx_destruct;

@end
