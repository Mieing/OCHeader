@class NSString;

@interface AWELongPressPanelCommentManagerPanelViewModel : AWELongPressPanelBaseViewModel

@property (copy, nonatomic) NSString *disableToast;

+ (id)longPressPanelViewModel;

- (void)configVM;
- (id)panelBizVMIdentifier;
- (BOOL)needShowForScene:(unsigned long long)a0;
- (BOOL)enableCommentManager;
- (BOOL)needShow;
- (void).cxx_destruct;

@end
