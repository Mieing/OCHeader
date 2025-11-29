@class NSString;

@interface IESLiveNativeAppShelfTradeDataModel : IESLiveDynamicModel

@property (nonatomic) long long dataType;
@property (nonatomic) long long prodcutType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) double viewHeight;

+ (id)modelsWithCardData:(id)a0;
+ (id)modelsWithTopData:(id)a0;
+ (double)maxViewHeight:(id)a0;
+ (void)calculateViewHeightWithModel:(id)a0 isTop:(BOOL)a1 tradeCount:(long long)a2;

- (id)attrValueString;

@end
