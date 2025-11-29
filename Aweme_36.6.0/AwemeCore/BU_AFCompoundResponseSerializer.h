@class NSArray;

@interface BU_AFCompoundResponseSerializer : BU_AFHTTPResponseSerializer

@property (copy, nonatomic) NSArray *responseSerializers;

+ (id)compoundSerializerWithResponseSerializers:(id)a0;

- (id)responseObjectForResponse:(id)a0 data:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
