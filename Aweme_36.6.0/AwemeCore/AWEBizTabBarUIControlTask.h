@class NSString, NSNumber;
@protocol AWETabBarControllerUIControlDelegate;

@interface AWEBizTabBarUIControlTask : NSObject <AWEBizTabBarUIControlTaskProtocol>

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) long long taskID;
@property (readonly, nonatomic) NSString *bizID;
@property (weak, nonatomic) id<AWETabBarControllerUIControlDelegate> delegate;
@property (readonly, nonatomic) NSNumber *lightModeProgress;
@property (readonly, nonatomic) NSNumber *BGColorFill;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createTaskWithBizID:(id)a0;

- (id)initWithTaskID:(long long)a0 bizID:(id)a1;
- (void)updateLightModeProgress:(double)a0;
- (void)updateBGColorFill:(BOOL)a0;
- (void)pushTaskToStack;
- (void)popTaskFromStack;
- (void).cxx_destruct;

@end
