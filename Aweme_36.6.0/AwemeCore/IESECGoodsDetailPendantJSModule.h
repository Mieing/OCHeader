@class NSMutableDictionary;

@interface IESECGoodsDetailPendantJSModule : IESECBaseJSModule

@property (retain, nonatomic) NSMutableDictionary *pendantSubscribers;

+ (id)methodLookup;

- (id)initWithParam:(id)a0;
- (void)updatePendantPosition:(id)a0;
- (id)getStorage:(id)a0;
- (void)removeStorage:(id)a0;
- (void)setStorage:(id)a0 value:(id)a1;
- (void)subscribeEvent:(id)a0 callbackName:(id)a1;
- (void)unSubscribeEvent:(id)a0;
- (void).cxx_destruct;

@end
