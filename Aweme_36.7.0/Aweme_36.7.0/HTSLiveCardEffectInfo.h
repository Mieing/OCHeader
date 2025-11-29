@class NSString, NSMutableArray;

@interface HTSLiveCardEffectInfo : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *effectCardsArray;
@property (readonly, nonatomic) unsigned long long effectCardsArray_Count;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
