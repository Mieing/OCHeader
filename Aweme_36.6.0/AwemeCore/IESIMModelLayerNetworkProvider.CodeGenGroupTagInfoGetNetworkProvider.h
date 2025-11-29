@class NSNumber, NSString;

@interface IESIMModelLayerNetworkProvider.CodeGenGroupTagInfoGetNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ applicationId;
}

@property (nonatomic, retain) NSNumber *convShortId;
@property (nonatomic, retain) NSNumber *templateId;
@property (nonatomic, copy) NSString *applicationId;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
