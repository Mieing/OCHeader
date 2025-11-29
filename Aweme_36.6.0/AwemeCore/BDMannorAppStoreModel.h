@class NSString, NSDictionary;

@interface BDMannorAppStoreModel : BDXBridgeModel

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *webURL;
@property (copy, nonatomic) NSString *openURL;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *creativeID;
@property (copy, nonatomic) NSString *SKANParams;
@property (copy, nonatomic) NSString *downloadURL;
@property (copy, nonatomic) NSString *complianceData;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSDictionary *adExtraData;
@property (nonatomic) BOOL preload;
@property (nonatomic) BOOL appStoreEnabled;
@property (nonatomic) unsigned long long downloadScene;
@property (copy, nonatomic) NSDictionary *data;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
