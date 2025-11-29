@class TVLManager;

@interface TVLLiveCallback : TTAVLiveCallback

@property (readonly, nonatomic) TVLManager *manager;

- (id)initWithManager:(id)a0 version:(int)a1;
- (void)frameDidReceiveBinarySei:(const char *)a0 andSize:(int)a1;
- (void)packetDidReceive:(int)a0 andDts:(long long)a1 andPts:(long long)a2 andInfo:(id)a3;
- (void)frameWillRender:(int)a0 andDts:(long long)a1 andPts:(long long)a2 andData:(id)a3;
- (void)onSeiImmediatelyCallback:(int)a0 andContent:(const char *)a1;
- (void).cxx_destruct;

@end
