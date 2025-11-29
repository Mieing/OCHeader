@class NSNumber, NSString, NSDictionary;

@interface BDXBridgePoiEditCommentPostCardMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *isSelectCard;
@property (retain, nonatomic) NSNumber *isUseImageEdit;
@property (retain, nonatomic) NSNumber *hideEditToolbar;
@property (copy, nonatomic) NSString *editPageToast;
@property (retain, nonatomic) NSNumber *useOpenCreation;
@property (copy, nonatomic) NSDictionary *logParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
