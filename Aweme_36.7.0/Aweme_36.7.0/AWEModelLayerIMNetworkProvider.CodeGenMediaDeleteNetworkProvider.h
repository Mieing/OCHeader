@class NSNumber, NSString;

@interface AWEModelLayerIMNetworkProvider.CodeGenMediaDeleteNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ convId;
    void /* function */ albumId;
    void /* function */ mediaId;
}

@property (nonatomic, retain) NSNumber *appId;
@property (nonatomic, copy) NSString *convId;
@property (nonatomic, retain) NSNumber *convShortId;
@property (nonatomic, retain) NSNumber *convType;
@property (nonatomic, retain) NSNumber *userId;
@property (nonatomic, copy) NSString *albumId;
@property (nonatomic, copy) NSString *mediaId;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)initWithConvType:(id)a0 mediaId:(id)a1 convId:(id)a2 convShortId:(id)a3 appId:(id)a4 userId:(id)a5 albumId:(id)a6;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
