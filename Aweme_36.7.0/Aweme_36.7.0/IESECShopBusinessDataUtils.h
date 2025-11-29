@interface IESECShopBusinessDataUtils : NSObject

+ (id)generateSqlDataFromClient:(id)a0 userId:(id)a1;
+ (void)modifyBusinessData:(long long)a0 secShopId:(id)a1 userId:(id)a2 businessId:(id)a3 businessData:(id)a4;
+ (void)modifyWithClientParams:(id)a0;

@end
