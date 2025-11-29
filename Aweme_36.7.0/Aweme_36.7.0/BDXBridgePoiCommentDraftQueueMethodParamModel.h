@class NSString;

@interface BDXBridgePoiCommentDraftQueueMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *poiDrafts;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
