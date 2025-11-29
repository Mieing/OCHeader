@class UILabel, WCFinderAuthInfoIconView, UIView;

@interface WCFinderWXContactEntranceView : UIView

@property (nonatomic) BOOL useNewStyle;
@property (retain, nonatomic) UIView *contactInfoBox;
@property (retain, nonatomic) UILabel *contactNameLabel;
@property (retain, nonatomic) UILabel *authInfoLabel;
@property (retain, nonatomic) UILabel *contactDescLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authIconView;
@property (retain, nonatomic) UIView *coverStackView;

+ (double)displayHeightWithNewStyle:(BOOL)a0 contact:(id)a1 coverItems:(struct vector<PreviewCoverItem, std::allocator<PreviewCoverItem>> { struct PreviewCoverItem *x0; struct PreviewCoverItem *x1; struct __compressed_pair<PreviewCoverItem *, std::allocator<PreviewCoverItem>> { struct PreviewCoverItem *x0; } x2; })a2 titleFont:(id)a3 contactDesc:(id)a4;

- (id)initWithTitleFont:(id)a0 width:(double)a1;
- (void)setupViewWithNewStyle:(BOOL)a0 contact:(id)a1 coverItems:(struct vector<PreviewCoverItem, std::allocator<PreviewCoverItem>> { struct PreviewCoverItem *x0; struct PreviewCoverItem *x1; struct __compressed_pair<PreviewCoverItem *, std::allocator<PreviewCoverItem>> { struct PreviewCoverItem *x0; } x2; })a2 showIcon:(BOOL)a3 contactDesc:(id)a4;
- (void)configCellInfo:(id)a0;
- (void).cxx_destruct;

@end
