@class NSString, NSMutableDictionary, AWEDCFeedBottomTabEntryPair;
@protocol AWEHPChannelControllerConfigProtocol;

@interface AWEDCFeedBottomTabPluginController : NSObject <AWEDCFeedBottomTabPluginControllerProtocol>

@property (nonatomic) BOOL isBottomTabTabSelected;
@property (retain, nonatomic) AWEDCFeedBottomTabEntryPair *pair;
@property (retain, nonatomic) AWEDCFeedBottomTabEntryPair *displayingEntryPair;
@property (retain, nonatomic) NSMutableDictionary *customEntryPairMap;
@property (nonatomic) BOOL hasTriggerLoad;
@property (weak, nonatomic) id<AWEHPChannelControllerConfigProtocol> config;
@property (copy, nonatomic) id /* block */ specialEntryChangeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enable;

- (void)channelEnterWithModel:(id)a0;
- (void)channelTabBarDidSelect;
- (void)channelTabBarDidUnSelect;
- (void)channelDidLoadWithType:(unsigned long long)a0;
- (id)channelGetCommunicationObject:(id)a0 byProtocol:(id)a1;
- (void)bottomTabSpecialEntryChange:(id)a0;
- (void)animateChangeBottomTabBarIfNeeded;
- (void)p_tryLoadEntry;
- (void)p_saveSpecialStyleIfNeeded;
- (void)p_tryUpdateEntryNeedAnimate:(BOOL)a0;
- (BOOL)hasSpecialEntry;
- (id)p_suitableCustomTabEntryPair;
- (void)p_realUpdateEntryWithEntryPair:(id)a0 animated:(BOOL)a1;
- (void)bgColorToTransparent;
- (void)useTempTabEntry:(id)a0;
- (void)resetCurrentEntry;
- (void)hideBottomTabEntry;
- (void)useCustomTabEntry:(id)a0 priority:(long long)a1 animated:(BOOL)a2;
- (BOOL)lastHasSpecialEntry;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
