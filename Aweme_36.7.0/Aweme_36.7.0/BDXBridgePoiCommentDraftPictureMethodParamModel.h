@class NSString, NSNumber;

@interface BDXBridgePoiCommentDraftPictureMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *toCommentId;
@property (nonatomic) BOOL isSubmit;
@property (retain, nonatomic) NSNumber *useOpenCreation;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
