@class UILabel, WCFinderFeedContentTextView, UIButton, NSString, UIView, MMUIButton, WCFinderCollectionHalfViewParams;
@protocol WCFinderCollectionHalfDescHeaderDelegate;

@interface WCFinderCollectionHalfDescHeader : UIView <WCFinderFeedContentTextClickActionDelegate>

@property (weak, nonatomic) id<WCFinderCollectionHalfDescHeaderDelegate> delegate;
@property (retain, nonatomic) WCFinderCollectionHalfViewParams *params;
@property (retain, nonatomic) MMUIButton *moreBtn;
@property (retain, nonatomic) UIView *customRightView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) WCFinderFeedContentTextView *descTextView;
@property (retain, nonatomic) UIButton *episodeBtn;
@property (retain, nonatomic) MMUIButton *shareBtn;
@property (retain, nonatomic) MMUIButton *favouriteBtn;
@property (nonatomic) double layoutWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)curRightView;
- (void)setupUI;
- (id)createSecondaryButtonWithTitle:(id)a0 action:(SEL)a1;
- (void)updateWithParams:(id)a0 customRightView:(id)a1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)didClickMore;
- (void)clickModFeedButtonAction:(id)a0;
- (void)clickShareButtonAction:(id)a0;
- (void)clickFavouriteButtonAction:(id)a0;
- (void)onFeedContentTextView:(id)a0 clickReadMore:(BOOL)a1;
- (void).cxx_destruct;

@end
