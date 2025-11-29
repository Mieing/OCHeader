@class NSString;

@interface CJPayUnifyVerifyPopUpContentModel : JSONModel

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *color;
@property (nonatomic) BOOL isBold;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
