@interface AWESearchAdImageStatistics : NSObject

+ (void)recordAdImageFilterResultWithPageUrl:(id)a0 frontendConfig:(id)a1 modelName:(id)a2 imgUrl:(id)a3 score:(double)a4 filterDict:(id)a5 extraInfo:(id)a6;
+ (void)recordErrorWithType:(id)a0 msg:(id)a1 code:(long long)a2 extraInfo:(id)a3;
+ (void)recordCost:(double)a0 type:(id)a1;

@end
