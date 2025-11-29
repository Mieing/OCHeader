@class WCPayLargeAccountTipsDialog, UIImageView, UIView, UILabel, UIButton;
@protocol WCPayFetchIdentifyTipsViewControllerDelegate;

@interface WCPayFetchIdentifyTipsViewController : MMWindowViewController {
    WCPayLargeAccountTipsDialog *m_data;
}

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (weak, nonatomic) id<WCPayFetchIdentifyTipsViewControllerDelegate> delegate;

- (id)init;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)refreshView:(id)a0;
- (void)close;
- (void)confirm;
- (void)layoutContentView;
- (void).cxx_destruct;

@end
