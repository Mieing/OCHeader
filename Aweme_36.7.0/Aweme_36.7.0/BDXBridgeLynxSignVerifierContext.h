@class NSData, NSString, NSDictionary;

@interface BDXBridgeLynxSignVerifierContext : NSObject

@property (retain, nonatomic) NSData *resourceData;
@property (copy, nonatomic) NSString *resourceURL;
@property (copy, nonatomic) NSString *resourceBundle;
@property (copy, nonatomic) NSString *resourceChannel;
@property (copy, nonatomic) NSString *containerName;
@property (copy, nonatomic) NSString *originURL;
@property (copy, nonatomic) NSString *bid;
@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSDictionary *monitorCommonParams;
@property (copy, nonatomic) NSDictionary *commonCategory;
@property (copy, nonatomic) NSString *viewType;
@property (copy, nonatomic) NSString *cdnURL;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *authNamespace;
@property (nonatomic) unsigned long long resourceVersion;

- (void).cxx_destruct;

@end
