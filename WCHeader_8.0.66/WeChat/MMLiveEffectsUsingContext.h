@class MMLiveVisionEffectDataItem, MMLiveDecorationDataItem;

@interface MMLiveEffectsUsingContext : NSObject

@property (retain, nonatomic) MMLiveDecorationDataItem *currentDecor;
@property (nonatomic) unsigned long long currentDecorUseTs;
@property (retain, nonatomic) MMLiveVisionEffectDataItem *currentVisionEffect;
@property (nonatomic) unsigned long long currentVisionEffectUseTs;

- (void).cxx_destruct;

@end
