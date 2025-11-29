@class UIButton, NSString, UIView;

@interface AWEIMPickerCloseComponent : AWEIMComponentBase <AWEIMPickerAlbumListComponentAction>

@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *naviBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)albumDidClickEntrance:(BOOL)a0;
- (void)albumDidSelectAlbumAtIndex:(long long)a0;
- (void).cxx_destruct;
- (void)backButtonPressed;
- (void)createUI;

@end
