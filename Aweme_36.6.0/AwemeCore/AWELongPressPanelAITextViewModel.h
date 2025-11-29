@interface AWELongPressPanelAITextViewModel : AWELongPressPanelBaseViewModel

+ (BOOL)shouldShowAiTextWithAwemeModel:(id)a0 referString:(id)a1;
+ (id)longPressPanelViewModel;

- (void)configVM;
- (id)panelBizVMIdentifier;
- (void)longPressVideotoTextAction;
- (BOOL)needShowForScene:(unsigned long long)a0;
- (BOOL)needShow;

@end
