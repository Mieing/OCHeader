@interface ACCGenericTemplateWeatherRequestHelper : NSObject

+ (void)fetchWeatherInfoWithSlotInfo:(id)a0 infoFormat:(id)a1 districtCode:(id)a2 completion:(id /* block */)a3;
+ (id)convertToGenericTemplateCustomInfoModelsWithWeatherInfo:(id)a0 slotInfo:(id)a1 infoFormat:(id)a2;
+ (id)formatWeatherInfo:(id)a0 formatStr:(id)a1;
+ (id)formatWeatherInfo:(id)a0 formatStr:(id)a1 index:(unsigned long long)a2;
+ (double)celsiusToFahrenheit:(double)a0;

@end
