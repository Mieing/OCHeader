@class UIImageView, UILabel, UIView;

@interface AWETripleColumnPlayletFeedEntryView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *pauseImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *switchImageView;

- (void)updateCoverViewWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupSubviews;

@end
