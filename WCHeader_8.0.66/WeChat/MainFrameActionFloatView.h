@class NSString, UIImageView, UIView;

@interface MainFrameActionFloatView : UIButton <CAAnimationDelegate> {
    UIImageView *m_viewBg;
    UIView *m_viewContent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onHideAction;
- (void)animateHideAction;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)updateSubviewWidth;
- (void)addLineWithButton:(id)a0;
- (void)addItemWithBtnData:(id)a0 showNew:(BOOL)a1 sel:(SEL)a2 target:(id)a3;
- (void)addDismissSel:(SEL)a0 target:(id)a1;
- (id)init;
- (void)animateShowInView:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void).cxx_destruct;

@end
