@interface AWELongPressPanelListenMusicLaterViewModel : AWELongPressPanelBaseViewModel

+ (id)longPressPanelViewModel;

- (void)configVM;
- (id)panelBizVMIdentifier;
- (BOOL)needShowForScene:(unsigned long long)a0;
- (void)trackListenLaterClick;
- (void)addToListenLater;
- (BOOL)needShow;

@end
