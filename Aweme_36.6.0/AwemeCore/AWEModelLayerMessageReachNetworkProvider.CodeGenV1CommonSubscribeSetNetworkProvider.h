@class NSString, NSNumber;

@interface AWEModelLayerMessageReachNetworkProvider.CodeGenV1CommonSubscribeSetNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ serviceAccountId;
    void /* function */ subcategorySubscribeInfos;
    void /* function */ bizExtra;
}

@property (nonatomic, copy) NSString *serviceAccountId;
@property (nonatomic, retain) NSNumber *serviceAccountSubStatus;
@property (nonatomic, retain) NSNumber *disturbStatus;
@property (nonatomic, copy) NSString *subcategorySubscribeInfos;
@property (nonatomic, copy) NSString *bizExtra;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
