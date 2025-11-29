@class NSString, NSNumber;

@interface AWEModelLayerShowNetworkProvider.CodeGendouyinContentPayCouponApplyNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ productId;
    void /* function */ clientAbParams;
}

@property (nonatomic, copy) NSString *productId;
@property (nonatomic, retain) NSNumber *currentEpisode;
@property (nonatomic, retain) NSNumber *mixId;
@property (nonatomic, retain) NSNumber *itemId;
@property (nonatomic, copy) NSString *clientAbParams;
@property (nonatomic, retain) NSNumber *entCouponApplyScene;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)initWithProductId:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
