@class NSString, CJBackBlockActionModel;

@interface CJPayBackBlockModel : JSONModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *context;
@property (nonatomic) long long policy;
@property (retain, nonatomic) CJBackBlockActionModel *confirmModel;
@property (retain, nonatomic) CJBackBlockActionModel *cancelModel;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
