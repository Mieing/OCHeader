@class NSArray, NSDictionary;

@interface IESLiveNativeAppShelfSectionCardList : IESLiveNativeAppShelfSectionBaseModel

@property (retain, nonatomic) NSArray *cardInfoArray;
@property (retain, nonatomic) NSDictionary *tradeDataDict;

+ (id)cardListWithType:(long long)a0 cardInfoArray:(id)a1 tradeData:(id)a2;

@end
