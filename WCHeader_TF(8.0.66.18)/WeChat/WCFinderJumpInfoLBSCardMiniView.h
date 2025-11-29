@class WCFinderJumpInfo, UIImageView, UILabel, MMUIButton, FinderJumpInfo_Style;
@protocol WCFinderJumpInfoLBSCardViewDelegate;

@interface WCFinderJumpInfoLBSCardMiniView : UIView

@property (retain, nonatomic) FinderJumpInfo_Style *style;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *poiTitle;
@property (retain, nonatomic) UILabel *poiWording;
@property (retain, nonatomic) MMUIButton *favButton;
@property (nonatomic) int showPosition;
@property (retain, nonatomic) WCFinderJumpInfo *jumpInfo;
@property (nonatomic) double layoutWidth;
@property (weak, nonatomic) id<WCFinderJumpInfoLBSCardViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateUI;
- (void)layoutSubviews;
- (void)updateWithJumpInfo:(id)a0 showPosition:(int)a1;
- (void)updateWithJumpInfo:(id)a0 style:(id)a1;
- (void)updateWithStyle:(id)a0;
- (void)onFavBtnClicked:(id)a0;
- (void)onCardClicked:(id)a0;
- (void).cxx_destruct;

@end
