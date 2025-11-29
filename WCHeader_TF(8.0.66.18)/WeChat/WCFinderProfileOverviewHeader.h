@class WCFinderSizingRichTextView, UITapGestureRecognizer, UIImageView, WCFinderProfileOverviewSection, UILabel, UIView, UIButton;
@protocol WCFinderProfileOverviewHeaderDelegate;

@interface WCFinderProfileOverviewHeader : UICollectionReusableView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) UIButton *extButton;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) WCFinderSizingRichTextView *detailTextView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (nonatomic) double displayMargin;
@property (weak, nonatomic) id<WCFinderProfileOverviewHeaderDelegate> delegate;
@property (nonatomic) double horizontalMargin;
@property (retain, nonatomic) WCFinderProfileOverviewSection *section;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_onDataChanged;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateData;
- (BOOL)showMoreButton;
- (id)displayTitleForSection;
- (void)_ensureDetailView;
- (id)createExtButton;
- (id)createTimeLabel;
- (struct CGSize { double x0; double x1; })_doLayout;
- (void)prepareForReuse;
- (void)_onClick;
- (void)onClickAllBtn;
- (void).cxx_destruct;

@end
