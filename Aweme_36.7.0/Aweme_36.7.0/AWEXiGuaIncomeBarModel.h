@class NSString;

@interface AWEXiGuaIncomeBarModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double income;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long incrementPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
