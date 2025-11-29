@class NSString, UIImageView, UILabel, UIView;

@interface AWEPadSearchEntranceView : UIView <AWEPadSearchEntranceViewProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIImageView *borderImageView;
@property (retain, nonatomic) UIImageView *searchIconImageView;
@property (retain, nonatomic) UILabel *searchTextLabel;
@property (nonatomic, getter=isFold) BOOL fold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)awe_themeDidChange:(long long)a0;
- (id)searchIconImage;
- (double)topCTAFloat:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;
- (void)refreshLayout;

@end
