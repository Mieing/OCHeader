@class NSString, CJPayBrandLoadingConfig;

@interface CJPayLoadingConfig : JSONModel

@property (nonatomic) BOOL enableHalfLoadingUseWindow;
@property (nonatomic) long long halfLoadingTimeOut;
@property (nonatomic) long long superPayLoadingTimeOut;
@property (nonatomic) long long superPayLoadingQueryInterval;
@property (nonatomic) long long superPayLoadingStayTime;
@property (nonatomic) BOOL isEcommerceDouyinLoadingAutoClose;
@property (nonatomic) long long loadingTimeOut;
@property (copy, nonatomic) NSString *superPayLoadingFailTitle;
@property (copy, nonatomic) NSString *superPayLoadingFailSubTitle;
@property (retain, nonatomic) CJPayBrandLoadingConfig *brandLoadingConfig;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
