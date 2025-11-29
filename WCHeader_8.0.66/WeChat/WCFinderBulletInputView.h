@class EmoticonBoardView, NSString, WCFinderBulletInputToolbarView;
@protocol WCFinderBulletInputViewDelegate;

@interface WCFinderBulletInputView : UIView <WCFinderBulletInputToolbarViewDelegate>

@property (retain, nonatomic) WCFinderBulletInputToolbarView *inputToolbarView;
@property (retain, nonatomic) EmoticonBoardView *emoticonBoardView;
@property (nonatomic) BOOL isReplying;
@property (weak, nonatomic) id<WCFinderBulletInputViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutInputView;
- (void)layoutEmoticonBoardView;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)showInputViewWithDisable;
- (void)showInputViewAtScrollViewY:(BOOL)a0;
- (void)showInteractionLimitView;
- (double)getVisibleHeight;
- (void)didCommitText:(id)a0;
- (void)onInputViewShowChange:(BOOL)a0;
- (void)onBulletSwitchChangeOpenState:(BOOL)a0;
- (BOOL)inputViewShouldDismisAfterCommit:(id)a0;
- (void).cxx_destruct;

@end
