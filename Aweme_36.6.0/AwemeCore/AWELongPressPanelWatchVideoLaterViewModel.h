@interface AWELongPressPanelWatchVideoLaterViewModel : AWELongPressPanelBaseViewModel

@property (nonatomic) BOOL hasTrackShow;

+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (Class)aAWEPlayInteractionAdapterClass;
+ (id)longPressPanelViewModel;

- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (id)aAWEPlayInteractionAdapter;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (BOOL)needShowForScene:(unsigned long long)a0;
- (void)trackWatchVideoLaterShow;
- (void)addToWatchLater;
- (BOOL)needShow;

@end
