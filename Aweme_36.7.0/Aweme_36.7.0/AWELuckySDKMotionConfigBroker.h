@class NSString;
@protocol BDMotionItemConfigProtocol;

@interface AWELuckySDKMotionConfigBroker : NSObject <AWEMotionItemConfigProtocol>

@property (retain, nonatomic) id<BDMotionItemConfigProtocol> itemConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)motionItemConfig;
- (BOOL)enableShake;
- (void)didReceiveShakeEvent:(id)a0 error:(id)a1 from:(id)a2;
- (double)shakeTimeInterval;
- (long long)motionLevel;
- (id)initWithItemConfig:(id)a0;
- (void).cxx_destruct;

@end
