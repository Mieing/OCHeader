@class UIImageView, UILabel, UIView;

@interface WCFinderLiveNoticeViewItemView : UIButton

@property (copy, nonatomic) id /* block */ onClickedTopNotice;
@property (nonatomic) BOOL showCoveredStyle;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *topLineView;
@property (nonatomic) BOOL isInList;
@property (retain, nonatomic) UIView *topNoticeContainer;
@property (retain, nonatomic) UIView *verticalLineView;
@property (retain, nonatomic) UILabel *topNoticeLabel;
@property (nonatomic) BOOL isTop;
@property (nonatomic) double arrowPaddingRightWhenNotInList;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateIsInList:(BOOL)a0;
- (void)layoutSubviews;
- (double)getCardArrowPaddingRight;
- (void)onTapTopNotice;
- (void).cxx_destruct;

@end
