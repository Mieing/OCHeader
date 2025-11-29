@class NSNumber, NSString;

@interface IESIMModelLayerNetworkProvider.CodeGenGroupTagGetNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ secUids;
    void /* function */ choose;
}

@property (nonatomic, retain) NSNumber *convShortId;
@property (nonatomic, copy) NSString *secUids;
@property (nonatomic, copy) NSString *choose;
@property (nonatomic, retain) NSNumber *needTagItem;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
