@interface MPGetSystemInfoImpl : NSObject

@property (weak, nonatomic) id context;

- (id)handleJSEvent:(id)a0;
- (id)fillAllInfo;
- (void)makeWindowInfo:(id)a0 result:(id)a1;
- (void)copyInfo:(id)a0 from:(id)a1 to:(id)a2;
- (id)fillDeviceInfo;
- (id)fillWindowInfo;
- (id)fillAppBaseInfo;
- (id)fillOneInfo:(id)a0;
- (void).cxx_destruct;

@end
