@class NSString, NSMutableDictionary, NSMutableArray;

@interface IESLiveBusinessConfigureStore : NSObject <IESLiveBusinessConfigureDelegate>

@property (retain, nonatomic) NSMutableDictionary *businessHandlerMap;
@property (retain, nonatomic) NSMutableArray *timerModellArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)componentOrientationChanged:(long long)a0;
- (void)didSetAttachingDIContext;
- (void)handleBusinesViewModel:(id)a0;
- (void)timerArrived:(id)a0;
- (void)timerNeverArrived:(id)a0;
- (void)registeModelType:(long long)a0 withHandler:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
