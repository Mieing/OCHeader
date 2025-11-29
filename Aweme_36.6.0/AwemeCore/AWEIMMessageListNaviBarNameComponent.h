@class UILabel, NSString;

@interface AWEIMMessageListNaviBarNameComponent : AWEIMComponentBase <AWEIMMessageListNaviBarViewProvider>

@property (retain, nonatomic) UILabel *nameLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (long long)naviBarPriority;
- (id)naviBarView;
- (long long)naviBarPosition;
- (double)naviBarViewCustomSpacing;
- (void)componentDidMounted:(id)a0;
- (void)p_setupName;
- (void).cxx_destruct;

@end
