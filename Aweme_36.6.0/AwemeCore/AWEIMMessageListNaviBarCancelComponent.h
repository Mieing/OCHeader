@class NSString, AWEIMDUXSelectedAlphaButton;

@interface AWEIMMessageListNaviBarCancelComponent : AWEIMComponentBase <AWEIMMessageListNaviBarViewProvider>

@property (retain, nonatomic) AWEIMDUXSelectedAlphaButton *cancelButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (long long)naviBarPriority;
- (id)naviBarView;
- (long long)naviBarPosition;
- (void)componentDidMounted:(id)a0;
- (void)p_cancelButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
