@protocol AWEFeedDouPlusLongPressShareManager;

@interface AWELongPressPanelDouPlusViewModel : AWELongPressPanelBaseViewModel

@property (retain, nonatomic) id<AWEFeedDouPlusLongPressShareManager> douplusManager;

+ (Class)aAWEFeedModuleServiceDOUYINSSAdapterClass;
+ (id)longPressPanelViewModel;
+ (Class)aAWEFeedLongPressPanelCommonAdapterClass;

- (id)getDouPlusShowClickTrackParams;
- (id)aAWEFeedModuleServiceDOUYINSSAdapter;
- (id)fetchLocalPromotionTrackParams;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (id)aAWEFeedLongPressPanelCommonAdapter;
- (void)trackShowDouPlus;
- (BOOL)needShow;
- (void).cxx_destruct;

@end
