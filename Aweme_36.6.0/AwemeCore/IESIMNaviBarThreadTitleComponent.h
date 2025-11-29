@class IESIMNaviBarThreadTitleView, NSString;

@interface IESIMNaviBarThreadTitleComponent : AWEIMComponentBase <AWEIMMessageListNaviBarViewProvider>

@property (retain, nonatomic) IESIMNaviBarThreadTitleView *titleView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (long long)naviBarPriority;
- (id)naviBarView;
- (long long)naviBarPosition;
- (struct CGSize { double x0; double x1; })naviBarViewIntrinsicContentSize;
- (double)naviBarViewCustomSpacing;
- (void)componentDidMounted:(id)a0;
- (void)p_binding;
- (void).cxx_destruct;

@end
