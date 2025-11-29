@class NSNumber, NSString;

@interface BDXBridgeImPublishScreenStreamMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *publishType;
@property (nonatomic) BOOL isPublish;
@property (copy, nonatomic) NSString *room_id;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
