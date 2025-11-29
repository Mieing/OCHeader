@class NSNumber, NSArray;

@interface AWEModelLayerIMNetworkProvider.CodeGenFileGetNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ fileIds;
}

@property (nonatomic, retain) NSNumber *convShortId;
@property (nonatomic, copy) NSArray *fileIds;
@property (nonatomic, retain) NSNumber *cursor;
@property (nonatomic, retain) NSNumber *limit;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
