@class NSString;

@interface CJPayUnifyGenPartCsrResponse : CJPayBaseResponse

@property (copy, nonatomic) NSString *partCsrData;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;
- (BOOL)isSuccess;

@end
