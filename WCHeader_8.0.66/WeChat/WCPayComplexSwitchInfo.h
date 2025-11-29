@class NSString, WCPayBindNewCardSwitch;

@interface WCPayComplexSwitchInfo : NSObject <PBCoding>

@property (retain, nonatomic) WCPayBindNewCardSwitch *bind_newcard_switch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_bind_newcard_switch;
+ (void)initialize;
+ (id)GenFromDictionary:(id)a0;

- (id)getPBPropertyTable;
- (void)genFromDic:(id)a0;
- (void).cxx_destruct;

@end
