@class UIButton, NSString;

@interface AWEIMMessageListNaviBarCloseComponent : AWEIMComponentBase <AWEIMMessageListNaviBarViewProvider, AWEIMMessageListNaviBarCloseInterface>

@property (retain, nonatomic) UIButton *closeButton;
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
- (void)updateCloseCompletionBlock:(id /* block */)a0;
- (void)p_closeButtonClick:(id)a0;
- (void).cxx_destruct;

@end
