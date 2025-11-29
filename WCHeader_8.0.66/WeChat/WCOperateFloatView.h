@class UIView, WCDataItem, UINavigationController, WCOperateFloatViewParams, UIImageView, UIButton, WCLikeButton, UILabel;

@interface WCOperateFloatView : UIView {
    UIImageView *m_bkgImageView;
    UIImageView *m_lineView;
    UIView *m_clipView;
    UILabel *m_tipLabel;
}

@property (nonatomic) BOOL isEnhanceInteractionEnabled;
@property (nonatomic) BOOL isPerformHideAnimation;
@property (retain, nonatomic) WCOperateFloatViewParams *params;
@property (readonly, nonatomic) WCDataItem *m_item;
@property (readonly, nonatomic) WCLikeButton *m_likeBtn;
@property (readonly, nonatomic) UIButton *m_commentBtn;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (copy, nonatomic) id /* block */ hideOperation;

- (double)buttonWidth:(id)a0;
- (id)initWithParams:(id)a0;
- (void)initLikeButton;
- (void)initLineView;
- (void)initCommentButton;
- (void)updateCommmentButton:(BOOL)a0;
- (void)updateBackgroundImageView:(BOOL)a0;
- (void)showWithItemData:(id)a0 tipPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)animationDidStop;
- (void)animationDidStopHide;
- (void)hide;
- (void)onLikeItem:(id)a0;
- (void).cxx_destruct;

@end
