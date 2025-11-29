@class NSString;

@interface CJPayTradeConfirmResultShowInfo : JSONModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) long long minTimeInMs;
@property (copy, nonatomic) NSString *type;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
