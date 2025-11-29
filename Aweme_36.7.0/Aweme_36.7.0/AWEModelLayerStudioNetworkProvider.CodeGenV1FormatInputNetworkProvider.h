@class NSArray, NSNumber, NSString;

@interface AWEModelLayerStudioNetworkProvider.CodeGenV1FormatInputNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ formatList;
    void /* function */ encryptUid;
}

@property (nonatomic, copy) NSArray *formatList;
@property (nonatomic, retain) NSNumber *userId;
@property (nonatomic, copy) NSString *encryptUid;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
