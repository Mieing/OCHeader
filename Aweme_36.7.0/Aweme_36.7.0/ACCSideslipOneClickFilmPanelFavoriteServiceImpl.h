@class NSString, AWEVideoPublishViewModel;
@protocol ACCSideslipPropPanelTrackerService, ACCSideslipPropPanelService, IESServiceProvider, ACCSideslipPropPanelFavoriteCapability, ACCSideslipPropPanelListDataProvider;

@interface ACCSideslipOneClickFilmPanelFavoriteServiceImpl : NSObject <ACCSideslipPropPanelFavoriteService>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCSideslipPropPanelListDataProvider> sideslipListDataProvider;
@property (weak, nonatomic) id<ACCSideslipPropPanelFavoriteCapability> favoriteCapability;
@property (weak, nonatomic) id<ACCSideslipPropPanelTrackerService> sideslipTrackerService;
@property (nonatomic) BOOL focusPropIsMyFavorite;
@property (nonatomic) BOOL favoriteEntranceEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindService;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1;
- (void)handleFavoriteStatus;
- (void)toggleFocusFavoriteState;
- (void).cxx_destruct;

@end
