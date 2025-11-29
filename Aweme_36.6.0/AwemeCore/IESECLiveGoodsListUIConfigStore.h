@class IESECLiveNormalUIConfig;

@interface IESECLiveGoodsListUIConfigStore : IESECLiveComponentUIConfigStoreBase

@property (retain, nonatomic) IESECLiveNormalUIConfig *tabContainerUIConfig;
@property (retain, nonatomic) IESECLiveNormalUIConfig *headerUIConfig;
@property (retain, nonatomic) IESECLiveNormalUIConfig *headerEntryUIConfig;
@property (retain, nonatomic) IESECLiveNormalUIConfig *headerEntryButtonIconUIConfig;
@property (retain, nonatomic) IESECLiveNormalUIConfig *headerEntryButtonIconLottieUIConfig;
@property (retain, nonatomic) IESECLiveNormalUIConfig *headerEntryButtonTitleUIConfig;
@property (retain, nonatomic) IESECLiveNormalUIConfig *headerEntryButtonTitleLottieUIConfig;
@property (retain, nonatomic) IESECLiveNormalUIConfig *headerShopAvatarUIConfig;
@property (retain, nonatomic) IESECLiveNormalUIConfig *headerShopAvatarBottomLabelUIConfig;
@property (retain, nonatomic) IESECLiveNormalUIConfig *headerSearchBarWithShopAvatarUIConfig;
@property (retain, nonatomic) IESECLiveNormalUIConfig *headerSearchBarWithoutShopAvatarUIConfig;
@property (retain, nonatomic) IESECLiveNormalUIConfig *headerShopInfoUIConfig;

- (void)setupUIConfigs;
- (void)setupTabContainerUIConfig;
- (void)setupHeaderUIConfig;
- (void)setupHeaderEntryUIConfig;
- (void)setupHeaderEntryButtonIconUIConfig;
- (void)setupHeaderEntryButtonIconLottieUIConfig;
- (void)setupHeaderEntryButtonTitleUIConfig;
- (void)setupHeaderEntryButtonTitleLottieUIConfig;
- (void)setupHeaderShopAvatarUIConfig;
- (void)setupHeaderShopAvatarBottomLabelUIConfig;
- (void)setupHeaderSearchBarWithShopAvatarUIConfig;
- (void)setupHeaderSearchBarWithoutShopAvatarUIConfig;
- (void)setupHeaderShopInfoUIConfig;
- (void).cxx_destruct;

@end
