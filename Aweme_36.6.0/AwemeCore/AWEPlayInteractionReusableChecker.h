@class NSString, AWEInteractionReusableMsgModel;
@protocol AWEPlayInteractionReusableSafeProtocol;

@interface AWEPlayInteractionReusableChecker : NSObject

@property (weak, nonatomic) id<AWEPlayInteractionReusableSafeProtocol> target;
@property (retain, nonatomic) AWEInteractionReusableMsgModel *resuableMsgModel;
@property (nonatomic) BOOL isSafe;
@property (nonatomic) unsigned long long sceneType;
@property (retain, nonatomic) NSString *scene;
@property (readonly, nonatomic) BOOL isCurrentSafe;

+ (id)reusableSafeCheckBeginWithTarget:(id)a0;

- (id)getBacktracesWithSkippedDepth:(unsigned long long)a0 needAllThreads:(BOOL)a1;
- (BOOL)checkReusableSafe;
- (void)trackUserException;
- (id)getSceneWithSceneType:(unsigned long long)a0;
- (id)getSceneStr;
- (void).cxx_destruct;

@end
