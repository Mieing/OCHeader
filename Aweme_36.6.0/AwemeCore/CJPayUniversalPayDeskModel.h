@class NSDictionary, NSString, UIViewController;
@protocol CJPayDeskRouteDelegate;

@interface CJPayUniversalPayDeskModel : JSONModel

@property (copy, nonatomic) NSDictionary *sdkInfo;
@property (nonatomic) unsigned long long service;
@property (nonatomic) unsigned long long subWay;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSString *ext;
@property (copy, nonatomic) NSString *forceCallbackAfterDouPayClose;
@property (retain, nonatomic) UIViewController *referVC;
@property (retain, nonatomic) id<CJPayDeskRouteDelegate> routeDelegate;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
