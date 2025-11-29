@class NSNumber, NSString;

@interface AWEModelLayerIMNetworkProvider.CodeGenMediaAddNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ albumId;
    void /* function */ sourceInfo;
}

@property (nonatomic, retain) NSNumber *convShortId;
@property (nonatomic, retain) NSNumber *userId;
@property (nonatomic, copy) NSString *albumId;
@property (nonatomic, retain) NSNumber *sourceType;
@property (nonatomic, copy) NSString *sourceInfo;
@property (nonatomic, retain) NSNumber *deviceId;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)initWithSourceType:(id)a0 sourceInfo:(id)a1 userId:(id)a2 albumId:(id)a3 convShortId:(id)a4;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
