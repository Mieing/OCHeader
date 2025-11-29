@class NSString;

@interface CJPayToastInfo : JSONModel

@property (copy, nonatomic) NSString *toastType;
@property (copy, nonatomic) NSString *toastMsg;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
