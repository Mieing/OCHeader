@class AFDSJBSearchView, UIImageView, UILabel, UIView;

@interface AFDSJBInviteFriendHeader : UIView

@property (retain, nonatomic) UILabel *outSiteTitleLabel;
@property (retain, nonatomic) UILabel *outSiteSubtitleLabel;
@property (retain, nonatomic) UIImageView *outSiteIconImgView;
@property (retain, nonatomic) UIImageView *outSiteArrowImgView;
@property (retain, nonatomic) UIView *searchContainer;
@property (retain, nonatomic) AFDSJBSearchView *searchView;
@property (retain, nonatomic) UIView *searchBar;
@property (retain, nonatomic) UIView *outSiteContainer;

- (void)setupCorner;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
