@class NSString;

@interface IESECWebImageAdvancedServiceImpl : NSObject <IESECWebImageAdvancedService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)memoryLimitRatio;
+ (void)updateImageRequestConfig:(id)a0 forUrl:(id)a1 preferredSize:(struct CGSize { double x0; double x1; })a2;


@end
