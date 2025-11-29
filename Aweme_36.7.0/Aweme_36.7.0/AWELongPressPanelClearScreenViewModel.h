@interface AWELongPressPanelClearScreenViewModel : AWELongPressPanelBaseViewModel

@property (nonatomic) unsigned long long fromScene;

+ (Class)aAWEPlayInteractionAdapterClass;
+ (id)longPressPanelViewModel;

- (BOOL)isInPureModePage;
- (BOOL)isInClearScreen;
- (id)aAWEPlayInteractionAdapter;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (long long)getPureModeEntryPosition;
- (long long)getPureModeType;
- (BOOL)needShow;

@end
