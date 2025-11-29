@class WCFinderFeedLiveToolBarItemButton, WCFinderFeedContentVM;
@protocol WCFinderFeedToolbarActionDelegate;

@interface WCFinderFeedLiveToolBarView : UIView

@property (retain, nonatomic) WCFinderFeedLiveToolBarItemButton *shareBtn;
@property (retain, nonatomic) WCFinderFeedLiveToolBarItemButton *likeBtn;
@property (nonatomic) BOOL allowForward;
@property (nonatomic) BOOL hideLikeAction;
@property (nonatomic) BOOL disableLikeAction;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (weak, nonatomic) id<WCFinderFeedToolbarActionDelegate> delegate;

+ (double)defaultWidthWithContentVM:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateContentVM:(id)a0;
- (void)setupSubView;
- (void)updateAllowForward:(BOOL)a0;
- (void)updateShareContainer:(BOOL)a0;
- (void)updateContentVM:(id)a0 hideLikeAction:(BOOL)a1 disableLikeAction:(BOOL)a2;
- (struct WCFinderDynamicIcon { id x0; id x1; })likeDynamicIconLikeFlag:(int)a0;
- (void)layoutUI;
- (void)didClickShareBtn:(id)a0;
- (void)didClickLikeBtn:(id)a0;
- (void)triggerLikeAnimation;
- (void)selectButtonWithAnimation:(id)a0 selectedImage:(id)a1 completion:(id /* block */)a2;
- (void)layoutSubviews;
- (id)whiteColorWithAlphaComponent;
- (void).cxx_destruct;

@end
