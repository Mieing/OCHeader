@class UIButton, NSString;

@interface AWEIMMessageListNaviBarFullScreenComponent : AWEIMComponentBase <AWEIMMessageListNaviBarViewProvider, AWEIMMessageListNaviBarFullScreenInterface>

@property (retain, nonatomic) UIButton *fullButton;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (long long)naviBarPriority;
- (id)naviBarView;
- (long long)naviBarPosition;
- (struct CGSize { double x0; double x1; })naviBarViewIntrinsicContentSize;
- (void)componentDidMounted:(id)a0;
- (void)updateFullScreenCompletionBlock:(id /* block */)a0;
- (void)p_fullButtonClick:(id)a0;
- (void).cxx_destruct;

@end
