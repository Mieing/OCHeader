@class NSString;

@interface CJPayButtonInfo : JSONModel

@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *type;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
