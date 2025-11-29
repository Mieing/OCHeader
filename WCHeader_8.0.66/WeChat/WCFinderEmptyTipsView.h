@class NSString, UIImageView, RichTextView, UIGestureRecognizer;
@protocol WCFinderEmptyTipsViewDelegate;

@interface WCFinderEmptyTipsView : UIView <ILinkEventExt>

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) UIImageView *stateImageView;
@property (retain, nonatomic) RichTextView *stateTipsTextView;
@property (nonatomic) double loadingSize;
@property (retain, nonatomic) UIGestureRecognizer *tapRecognizer;
@property (weak, nonatomic) id<WCFinderEmptyTipsViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)defaultStyleFlagOfState:(unsigned long long)a0;
+ (id)defaultIconImageOfState:(unsigned long long)a0;
+ (id)defaultTipsWordingOfState:(unsigned long long)a0;

- (id)init;
- (void)setState:(unsigned long long)a0 withConfig:(id)a1;
- (unsigned long long)getState;
- (void)resumeLoadingAnimationIfNeed;
- (void)updateLayout;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (void)onEmptyTipsViewDidClick;
- (void)setEmptyTipsViewColor:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
