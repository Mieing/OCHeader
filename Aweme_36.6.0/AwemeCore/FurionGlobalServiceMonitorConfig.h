@class NSString, NSArray;

@interface FurionGlobalServiceMonitorConfig : NSObject

@property (nonatomic) BOOL enable;
@property (nonatomic) float user_rate;
@property (nonatomic) float init_rate;
@property (nonatomic) float run_rate;
@property (retain, nonatomic) NSString *ignore_scene;
@property (retain, nonatomic) NSArray *ignoreSceneArray;

- (BOOL)shouldReportServiceInitData;
- (void).cxx_destruct;
- (id)init;

@end
