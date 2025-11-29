@class NSString;

@interface CJPayUnifyGetSignFactorResponse : CJPayBaseResponse

@property (copy, nonatomic) NSString *signFactor;
@property (copy, nonatomic) NSString *signFactorID;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;
- (BOOL)isSuccess;

@end
