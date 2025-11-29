@class UIImageView, FinderMusicBaikeSummary, UILabel, UIView;

@interface WCFinderProfileMusicianBaikeView : UIView

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (nonatomic) struct CGSize { double width; double height; } cacheSize;
@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) FinderMusicBaikeSummary *baikeSummary;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_initViews;
- (void)buildLayout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (id)descForBaikeCard:(id)a0;
- (void).cxx_destruct;

@end
