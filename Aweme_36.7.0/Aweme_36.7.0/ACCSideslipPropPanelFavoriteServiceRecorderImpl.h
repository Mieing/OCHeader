@class NSString;
@protocol ACCSideslipPropPanelService, ACCPropPickerService, IESServiceProvider, ACCSideslipPropPanelTrackerService;

@interface ACCSideslipPropPanelFavoriteServiceRecorderImpl : NSObject <ACCStickerPickerServiceSubscriber, ACCSideslipPropPanelFavoriteService>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCPropPickerService> propPickerService;
@property (weak, nonatomic) id<ACCSideslipPropPanelTrackerService> sideslipTrackerService;
@property (nonatomic) BOOL focusPropIsMyFavorite;
@property (nonatomic) BOOL shouldFetchExtraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL favoriteEntranceEnabled;

- (id)stickerPickerService;
- (void)p_bindService;
- (void)stickerPickerServiceDidUpdateSticker:(id)a0 favoriteStatus:(BOOL)a1 error:(id)a2;
- (void)stickerPickerServiceDidFinishLoadCategories:(id)a0;
- (void)toggleFocusFavoriteState;
- (void)fetchExtraInfoIfNeeded;
- (void)p_fetchDiyTemplateListIfNeeded;
- (void)p_handleFavoriteState;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;

@end
