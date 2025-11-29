@class NSString, UIStackView;
@protocol AWEIMMessageListNaviBarTitleViewDelegate;

@interface AWEIMMessageListNaviBarTitleView : UIStackView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIStackView *avatarStackView;
@property (retain, nonatomic) UIStackView *titleContainerStackView;
@property (retain, nonatomic) UIStackView *mainTitleStackView;
@property (retain, nonatomic) UIStackView *subtitleStackView;
@property (weak, nonatomic) id<AWEIMMessageListNaviBarTitleViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_createComponents;
- (void)updateViewsAndSpacings:(id)a0 forPosition:(long long)a1;
- (void)p_didClickSelfWithGesture:(id)a0;
- (id)p_organizeNaviViewsAndSpacings:(id)a0 toStackView:(id)a1 alignment:(long long)a2 semanticContentAttribute:(long long)a3;
- (void).cxx_destruct;
- (id)init;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;

@end
