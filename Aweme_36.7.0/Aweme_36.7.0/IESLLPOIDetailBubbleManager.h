@class NSArray, BDXBridgeEventSubscriber, NSString;

@interface IESLLPOIDetailBubbleManager : NSObject

@property (copy, nonatomic) NSArray *configModels;
@property (nonatomic) long long index;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) BOOL hasFinished;
@property (nonatomic) BOOL isRunning;

- (void)setupLynxPopConfigRegistListener;
- (void)sendNativeNotification:(id)a0;
- (void)sendLynxNotification:(id)a0;
- (void)registBubble:(id /* block */)a0 forConfig:(id)a1;
- (void).cxx_destruct;
- (void)startup;
- (void)dealloc;
- (void)setup;
- (void)markFinished;

@end
