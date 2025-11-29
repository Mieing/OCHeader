@interface AWELongPressPanelDanmakuConfigViewModel : AWELongPressPanelBaseViewModel

@property (nonatomic) unsigned long long fromScene;

+ (BOOL)shouldShowDanmakuConfigWithAwemeModel:(id)a0 referString:(id)a1 enterFrom:(id)a2;
+ (id)longPressPanelViewModel;

- (void)configVM;
- (id)panelBizVMIdentifier;
- (BOOL)needShowForScene:(unsigned long long)a0;
- (BOOL)needShow;

@end
