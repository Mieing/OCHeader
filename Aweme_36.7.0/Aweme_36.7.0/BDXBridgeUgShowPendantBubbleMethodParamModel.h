@class NSString, NSNumber;

@interface BDXBridgeUgShowPendantBubbleMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSNumber *durationMs;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *logExtra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
