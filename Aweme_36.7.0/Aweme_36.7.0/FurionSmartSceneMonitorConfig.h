@class NSNumber;

@interface FurionSmartSceneMonitorConfig : NSObject

@property (retain, nonatomic) NSNumber *innerEnableUser;
@property (nonatomic) BOOL enable;
@property (nonatomic) float user_rate;
@property (nonatomic) float init_rate;
@property (nonatomic) float run_rate;

- (BOOL)enableUser;
- (void).cxx_destruct;
- (id)init;

@end
