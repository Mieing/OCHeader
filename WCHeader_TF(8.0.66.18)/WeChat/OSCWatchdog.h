@class OSCPingThread;

@interface OSCWatchdog : NSObject {
    OSCPingThread *_pingThread;
}

- (id)initWithThreashold:(double)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
