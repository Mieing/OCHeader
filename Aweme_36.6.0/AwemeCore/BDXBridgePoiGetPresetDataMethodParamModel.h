@class NSString, NSNumber;

@interface BDXBridgePoiGetPresetDataMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *toCommentId;
@property (nonatomic) BOOL supportRecoverDraft;
@property (nonatomic) BOOL hasDraft;
@property (retain, nonatomic) NSNumber *useOpenCreation;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
