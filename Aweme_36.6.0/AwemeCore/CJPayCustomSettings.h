@class NSString, NSDictionary;

@interface CJPayCustomSettings : JSONModel

@property (copy, nonatomic) NSString *withdrawPageTitle;
@property (copy, nonatomic) NSString *withdrawPageMiddleText;
@property (copy, nonatomic) NSString *withdrawPageBottomText;
@property (copy, nonatomic) NSDictionary *withdrawResultPageDescDict;
@property (copy, nonatomic) NSDictionary *withdrawPageMiddleTextDict;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
