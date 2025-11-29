@class NSNumber, NSString;

@interface IESIMModelLayerNetworkProvider.CodeGenGroupTagScanNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ choose;
}

@property (nonatomic, retain) NSNumber *convShortId;
@property (nonatomic, retain) NSNumber *cursor;
@property (nonatomic, retain) NSNumber *limit;
@property (nonatomic, copy) NSString *choose;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
