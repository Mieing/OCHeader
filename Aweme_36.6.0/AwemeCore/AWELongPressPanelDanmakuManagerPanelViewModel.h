@class NSString;

@interface AWELongPressPanelDanmakuManagerPanelViewModel : AWELongPressPanelBaseViewModel

@property (copy, nonatomic) NSString *disableToast;

+ (id)longPressPanelViewModel;

- (BOOL)enableDanmaku;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (BOOL)needShowForScene:(unsigned long long)a0;
- (BOOL)needShow;
- (void).cxx_destruct;

@end
