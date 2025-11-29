@class UILabel, DUXBaseImageView;

@interface AWEPadLSBWatchHistoryCardBottomView : UIView

@property (retain, nonatomic) DUXBaseImageView *digImageView;
@property (retain, nonatomic) UILabel *textLabel;

- (void)configBottomViewWithCardType:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupUI;

@end
