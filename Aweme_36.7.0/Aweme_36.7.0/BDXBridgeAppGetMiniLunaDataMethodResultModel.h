@class NSString, NSDictionary;

@interface BDXBridgeAppGetMiniLunaDataMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *msg;
@property (copy, nonatomic) NSDictionary *data;
@property (nonatomic) long long code;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
