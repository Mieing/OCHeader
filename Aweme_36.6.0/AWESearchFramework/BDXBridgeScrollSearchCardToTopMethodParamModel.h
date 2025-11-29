@class NSNumber;

@interface BDXBridgeScrollSearchCardToTopMethodParamModel : BDXBridgeModel

@property (nonatomic) BOOL animation;
@property (retain, nonatomic) NSNumber *offset;
@property (retain, nonatomic) NSNumber *needCompletionCallback;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
