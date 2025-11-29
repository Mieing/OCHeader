@class NSString, NSDictionary;

@interface AWEHPChannelReloadTypeDetail : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *subType;
@property (readonly, copy, nonatomic) NSString *componentType;
@property (readonly, copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) NSDictionary *bizTrackParams;
@property (readonly, nonatomic) BOOL needDelayUselessTopTab;
@property (readonly, nonatomic) BOOL needCreateLandTypeInLaunchLanding;

- (id)initWithType:(unsigned long long)a0 subType:(id)a1;
- (id)initWithType:(unsigned long long)a0 subType:(id)a1 componentType:(id)a2 componentID:(id)a3 needDelayUselessTopTab:(BOOL)a4 needCreateLandTypeInLaunchLanding:(BOOL)a5;
- (id)initWithType:(unsigned long long)a0 subType:(id)a1 needDelayUselessTopTab:(BOOL)a2 needCreateLandTypeInLaunchLanding:(BOOL)a3;
- (id)initWithType:(unsigned long long)a0 subType:(id)a1 componentType:(id)a2 componentID:(id)a3;
- (void)triggerDelayUselessTopTabFail;
- (void).cxx_destruct;

@end
