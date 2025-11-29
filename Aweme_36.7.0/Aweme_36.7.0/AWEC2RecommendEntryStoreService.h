@class NSString;

@interface AWEC2RecommendEntryStoreService : HTSService <AWEC2RecommendEntryStoreService>

@property (nonatomic) BOOL switchState;
@property (nonatomic) BOOL showState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDoubleColumnEntrySwitchON;
- (void)setShowDoubleColumnEntry:(BOOL)a0;
- (BOOL)isShowDoubleColumnEntry;
- (void)setDoubleColumnEntrySwitch:(BOOL)a0;
- (id)init;

@end
