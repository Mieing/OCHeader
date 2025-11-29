@class NSMutableDictionary;

@interface AWEECShoppingAIGuideCardSettingProvider : NSObject

@property (retain, nonatomic) NSMutableDictionary *cardCache;

+ (unsigned long long)cardRenderType:(long long)a0;
+ (double)cardHeightForCardType:(unsigned long long)a0;
+ (id)allSliceCardSettings;
+ (id)allLynxCardSettings;
+ (id)allHybridCardSetting;
+ (id)fallbackHybridCardSetting;
+ (id)lynxCardUrlString:(id)a0;
+ (id)lynxCardSettings:(long long)a0;
+ (id)sliceCardSettings:(long long)a0;

- (void)enqueueLynxCard:(id)a0 withType:(unsigned long long)a1;
- (id)dequeueLynxCardWithType:(unsigned long long)a0 cardDataString:(id)a1 eventData:(id)a2 uiData:(id)a3 maxWidth:(double)a4 lynxDelegate:(id)a5;
- (id)cardStackForType:(unsigned long long)a0;
- (void)preloadLynxCardsWithCount:(unsigned long long)a0;
- (void).cxx_destruct;

@end
