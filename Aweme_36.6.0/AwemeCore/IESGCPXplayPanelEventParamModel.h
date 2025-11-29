@class NSString, NSDictionary;

@interface IESGCPXplayPanelEventParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *buttonType;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *eventType;
@property (copy, nonatomic) NSDictionary *extraInfo;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
