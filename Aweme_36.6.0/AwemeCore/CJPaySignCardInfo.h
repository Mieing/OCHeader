@class NSString;

@interface CJPaySignCardInfo : JSONModel

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *param;
@property (copy, nonatomic) NSString *titleMsg;
@property (copy, nonatomic) NSString *buttonText;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
