@class NSString, AWEPaySKMAmountInfo;

@interface AWEPaySKMCheckCodeAddressInfo : JSONModel

@property (copy, nonatomic) NSString *addressType;
@property (copy, nonatomic) NSString *codeAddress;
@property (copy, nonatomic) NSString *codeBizType;
@property (copy, nonatomic) NSString *tips;
@property (retain, nonatomic) AWEPaySKMAmountInfo *amount;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
