@class NSString;

@interface CJPayFEGuideInfoModel : JSONModel

@property (copy, nonatomic) NSString *guideType;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *guideData;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
