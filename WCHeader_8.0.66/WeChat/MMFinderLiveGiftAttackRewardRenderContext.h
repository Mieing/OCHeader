@class NSValue, GiftAttackRenderScriptObj, MMWeEffectManager;

@interface MMFinderLiveGiftAttackRewardRenderContext : NSObject

@property (retain, nonatomic) MMWeEffectManager *weeffectManager;
@property (retain, nonatomic) NSValue *renderRegion;
@property (retain, nonatomic) NSValue *startPos;
@property (nonatomic) long long renderScriptId;
@property (retain, nonatomic) GiftAttackRenderScriptObj *renderScript;

- (BOOL)isValid;
- (void).cxx_destruct;

@end
