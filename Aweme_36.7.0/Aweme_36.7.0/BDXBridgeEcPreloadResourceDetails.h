@class NSString, NSNumber;

@interface BDXBridgeEcPreloadResourceDetails : BDXBridgeModel

@property (copy, nonatomic) NSString *uri;
@property (retain, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSString *errMsg;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *bizTag;
@property (copy, nonatomic) NSString *sceneTag;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
