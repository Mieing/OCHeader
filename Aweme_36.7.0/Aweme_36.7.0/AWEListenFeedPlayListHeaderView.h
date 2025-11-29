@class UILabel, AWEButton, DUXButton;

@interface AWEListenFeedPlayListHeaderView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEButton *closeButton;
@property (retain, nonatomic) DUXButton *playStyleButton;

- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
