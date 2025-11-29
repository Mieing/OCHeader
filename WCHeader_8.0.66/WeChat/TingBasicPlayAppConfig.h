@class NSString;
@protocol TingPlayAppMinimizeDelegate;

@interface TingBasicPlayAppConfig : NSObject <TingPlayAppConfig>

@property (weak, nonatomic) id<TingPlayAppMinimizeDelegate> minimizeDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)identifier;
- (int)audioModuleScene;
- (void)onMinimizeTap;
- (int)playTaskType;
- (void).cxx_destruct;

@end
