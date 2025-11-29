@class NSString;

@interface CJPayPayInfoDesc : JSONModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *showNum;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
