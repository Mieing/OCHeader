@interface AWELongPressPanelBarrageViewModel : AWELongPressPanelBaseViewModel

+ (id)longPressPanelViewModel;

- (BOOL)canShowBubble;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (BOOL)needShowForScene:(unsigned long long)a0;
- (BOOL)bulletStatus;
- (BOOL)needShow;

@end
