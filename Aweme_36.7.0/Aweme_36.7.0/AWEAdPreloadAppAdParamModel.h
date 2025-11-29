@class NSString, NSNumber;

@interface AWEAdPreloadAppAdParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *adID;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *skan;
@property (copy, nonatomic) NSString *creativeID;
@property (copy, nonatomic) NSString *logExtra;
@property (retain, nonatomic) NSNumber *downloadScene;
@property (copy, nonatomic) NSString *webURL;
@property (copy, nonatomic) NSString *ppid;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
