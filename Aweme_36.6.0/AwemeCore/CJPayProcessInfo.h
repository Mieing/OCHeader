@class NSString;

@interface CJPayProcessInfo : JSONModel

@property (copy, nonatomic) NSString *createTime;
@property (copy, nonatomic) NSString *processId;
@property (copy, nonatomic) NSString *processInfo;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;
- (id)dictionaryValue;
- (BOOL)isValid;

@end
