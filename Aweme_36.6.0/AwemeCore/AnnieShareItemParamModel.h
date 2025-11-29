@class NSString;

@interface AnnieShareItemParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *itemType;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *extra;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
