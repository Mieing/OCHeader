@class WCDataItem, WCLikeButton, MMUIButton;

@interface WCPhotoMutipleImageBottomView : UIView

@property (retain, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) WCLikeButton *likeButton;
@property (copy, nonatomic) id /* block */ likeOpBlock;
@property (retain, nonatomic) MMUIButton *commentButton;
@property (copy, nonatomic) id /* block */ commentBlock;
@property (retain, nonatomic) MMUIButton *detailButton;
@property (copy, nonatomic) id /* block */ detailBlock;
@property (nonatomic) BOOL enablesHotAreaOptimization;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataItem:(id)a1 likeOpBlock:(id /* block */)a2 commentBlock:(id /* block */)a3 detailBlock:(id /* block */)a4;
- (void)initView;
- (void)initLikeButton;
- (void)initCommentButton;
- (void)initDetailButton;
- (void)updateWithDataItem:(id)a0;
- (void)layoutSubviews;
- (void)updateHotArea;
- (void)onCommentButtonClicked:(id)a0;
- (void)onDetailButtonClicked:(id)a0;
- (struct CGSize { double x0; double x1; })buttonSize:(id)a0 minTitleWidth:(double)a1 maxButtonWith:(double)a2;
- (id)suitableFontSizeForLikeButton:(id)a0 commentButton:(id)a1 detailButton:(id)a2;
- (BOOL)canEnableInteractionButtons;
- (void).cxx_destruct;

@end
