@class NSString;

@interface CJPayPreTradeTrackInfo : JSONModel

@property (copy, nonatomic) NSString *balanceStatus;
@property (copy, nonatomic) NSString *bankCardStatus;
@property (copy, nonatomic) NSString *creditStatus;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
