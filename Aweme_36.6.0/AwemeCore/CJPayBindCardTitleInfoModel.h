@class NSString;

@interface CJPayBindCardTitleInfoModel : JSONModel

@property (copy, nonatomic) NSString *displayIcon;
@property (copy, nonatomic) NSString *displayDesc;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *orderInfo;
@property (copy, nonatomic) NSString *iconURL;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
