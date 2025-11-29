@class EmoticonBoardView, NSString, UIView;
@protocol EmoticonBoardViewDelegate, BaseEmoticonViewDelegate;

@interface WSEmoticonPadViewController : MMUIViewController <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *contentBGView;
@property (retain, nonatomic) EmoticonBoardView *emoticonPad;
@property (retain, nonatomic) UIView *guideView;
@property (nonatomic, getter=isEmoticonBoardUp) BOOL emoticonBoardUp;
@property (weak, nonatomic) id<EmoticonBoardViewDelegate, BaseEmoticonViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initViews;
- (void)animatShowOnView:(id)a0 refFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 exterInfo:(id)a2;
- (void)touchDownInsideMask:(id)a0;
- (void)animateHideWithCompleteBlock:(id /* block */)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;

@end
