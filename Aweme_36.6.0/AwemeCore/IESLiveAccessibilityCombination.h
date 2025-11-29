@class NSString, NSMutableDictionary;

@interface IESLiveAccessibilityCombination : NSObject <IESLiveAccessibilityCombination>

@property (retain, nonatomic) NSMutableDictionary *unitPool;
@property (nonatomic) BOOL closeCombinationImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)registerWrapView:(id)a0 identify:(id)a1;
- (void)embeddedAccessbilityView:(id)a0 identify:(id)a1 configItem:(id)a2;
- (void)embeddedNewAccessbilityViewIdentify:(id)a0 config:(id)a1;
- (void)removeAccessbilityViewIdentify:(id)a0;
- (id)unitWithIdentify:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end
