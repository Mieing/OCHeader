@class NSString;

@interface CJBackBlockActionModel : JSONModel

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long action;
@property (copy, nonatomic) NSString *fontWeight;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
