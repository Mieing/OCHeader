@class IESECShopPreloadConfiguration, IESECStoreContainerViewModel;

@interface IESECShopPrehotCachedModel : NSObject {
    IESECShopPreloadConfiguration *_configuration;
}

@property (nonatomic) double timeStamp;
@property (retain, nonatomic) IESECStoreContainerViewModel *viewModel;
@property (readonly, nonatomic) BOOL isValid;
@property (nonatomic) BOOL hasHitCache;
@property (nonatomic) BOOL hasReinitValidDur;

- (void).cxx_destruct;

@end
