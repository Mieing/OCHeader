@class NSNumber, NSString, NSDictionary;

@interface BDXBridgeCommentOpenHunterCommentApiMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *actionType;
@property (copy, nonatomic) NSString *serviceId;
@property (copy, nonatomic) NSString *cid;
@property (copy, nonatomic) NSString *awemeId;
@property (retain, nonatomic) NSNumber *diggType;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
