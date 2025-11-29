@class NSArray, NSString, NSNumber;

@interface AWEModelLayerStudioNetworkProvider.CodeGenV1ShootPositionRecommendNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ imageList;
    void /* function */ text;
    void /* function */ title;
}

@property (nonatomic, copy) NSArray *imageList;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) NSNumber *count;
@property (nonatomic, retain) NSNumber *defalutCheckType;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
