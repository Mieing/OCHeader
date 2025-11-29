@class UILabel, DUXButton, UIView;

@interface AWERecordInspirationCommonSearchResultTimeoutView : UIView

@property (retain, nonatomic) UIView *itemContentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) DUXButton *refreshButton;
@property (copy, nonatomic) id /* block */ searchResultTimeoutViewTapRefreshAction;

- (void)clickRefreshAction;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (void)setupSubviews;

@end
