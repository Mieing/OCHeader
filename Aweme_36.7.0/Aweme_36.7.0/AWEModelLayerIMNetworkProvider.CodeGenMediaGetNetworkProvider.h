@class NSNumber, NSString;

@interface AWEModelLayerIMNetworkProvider.CodeGenMediaGetNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ albumId;
    void /* function */ mediaIds;
}

@property (nonatomic, retain) NSNumber *convShortId;
@property (nonatomic, copy) NSString *albumId;
@property (nonatomic, copy) NSString *mediaIds;
@property (nonatomic, retain) NSNumber *cursor;
@property (nonatomic, retain) NSNumber *limit;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)initWithCursor:(id)a0 convShortId:(id)a1 mediaIds:(id)a2 limit:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
