@class NSString, UIView;

@interface IESIMGroupAICloneNetworkErrorEmptyViewComponent : AWEIMComponentBase <IESIMGroupAICloneNoAddedEmptyViewInterface, AWEIMComponentLazyCreate>

@property (retain, nonatomic) UIView *emptyView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lazyComponentWakeupInterface;

- (void)componentDidMounted:(id)a0;
- (void)showEmptyView;
- (void)hideEmptyView;
- (void)showEmptyResponseView;
- (id)p_createEmptyView;
- (id)p_createEmptyResponseView;
- (void)p_refreshBtnClicked;
- (void).cxx_destruct;

@end
