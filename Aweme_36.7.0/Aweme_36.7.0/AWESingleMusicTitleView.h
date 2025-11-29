@class UILabel;
@protocol ACCInsetsLabelProtocol;

@interface AWESingleMusicTitleView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) id<ACCInsetsLabelProtocol> songTagLabel;
@property (nonatomic) BOOL isEliteVersion;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
