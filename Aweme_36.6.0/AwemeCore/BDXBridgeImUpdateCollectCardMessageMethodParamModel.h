@class NSString, NSNumber;

@interface BDXBridgeImUpdateCollectCardMessageMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *msgId;
@property (copy, nonatomic) NSString *cid;
@property (retain, nonatomic) NSNumber *aweType;
@property (retain, nonatomic) NSNumber *toStatus;
@property (copy, nonatomic) NSString *updateSchema;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
