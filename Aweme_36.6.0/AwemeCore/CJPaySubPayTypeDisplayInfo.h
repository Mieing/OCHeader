@class NSString;

@interface CJPaySubPayTypeDisplayInfo : JSONModel

@property (copy, nonatomic) NSString *subPayType;
@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *passwordPageDescTitle;
@property (copy, nonatomic) NSString *paymentInfo;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (id)trackParams;
- (id)buildShowConfig;
- (void).cxx_destruct;

@end
