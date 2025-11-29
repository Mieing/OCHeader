@class NSNumber, NSString;

@interface BDXBridgePoiImageIndexUpdateMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *fromIndex;
@property (retain, nonatomic) NSNumber *toIndex;
@property (copy, nonatomic) NSString *toCommentId;
@property (retain, nonatomic) NSNumber *useOpenCreation;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
