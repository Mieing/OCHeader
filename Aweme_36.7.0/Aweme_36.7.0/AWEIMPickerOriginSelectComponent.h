@class UIButton, NSString;

@interface AWEIMPickerOriginSelectComponent : AWEIMComponentBase <AWEIMPickerAlbumListComponentAction, AWEIMPickerAssetSelectedProcessAction>

@property (retain, nonatomic) UIButton *originalButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)albumDidClickEntrance:(BOOL)a0;
- (void)albumDidSelectAlbumAtIndex:(long long)a0;
- (void)onSelectedOriginStatusDidChanged:(BOOL)a0;
- (void)originalButtonPressed:(id)a0;
- (void).cxx_destruct;
- (void)createUI;
- (void)layoutUI;

@end
