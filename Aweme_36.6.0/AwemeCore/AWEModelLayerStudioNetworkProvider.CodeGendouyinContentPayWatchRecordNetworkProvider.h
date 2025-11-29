@class NSString, NSNumber;

@interface AWEModelLayerStudioNetworkProvider.CodeGendouyinContentPayWatchRecordNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ itemId;
}

@property (nonatomic, copy) NSString *itemId;
@property (nonatomic, retain) NSNumber *skuId;
@property (nonatomic, retain) NSNumber *spuId;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
