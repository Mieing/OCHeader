@class NSNumber;
@protocol AmoebaMultiEventDelegate;

@interface AmoebaMultiEventMonitor : NSObject {
    NSNumber *m_monitorSwitch;
    BOOL m_isOpenMonitor;
}

@property (weak, nonatomic) id<AmoebaMultiEventDelegate> delegate;

+ (id)shareInstance;

- (BOOL)isOpenMonitor;
- (void)startMonitor;
- (void)stopMonitor;
- (void)onPbCgiReq:(id)a0 cgiName:(id)a1;
- (void)onPbCgiResq:(id)a0 cgiName:(id)a1 errCode:(unsigned int)a2 errMsg:(id)a3;
- (void).cxx_destruct;

@end
