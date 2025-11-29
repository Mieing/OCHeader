@class NSString, UIView;

@interface IESIMGroupAICloneNoAddedEmptyViewComponent : AWEIMComponentBase <AWEIMComponentLazyCreate, IESIMGroupAICloneNoAddedEmptyViewInterface>

@property (retain, nonatomic) UIView *emptyView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lazyComponentWakeupInterface;

- (void)componentDidMounted:(id)a0;
- (void)showEmptyView;
- (void)hideEmptyView;
- (void)p_addBtnClicked;
- (id)p_createEmptyView;
- (void).cxx_destruct;

@end
