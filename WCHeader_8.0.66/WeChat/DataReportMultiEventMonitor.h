@class NSString, NSNumber;
@protocol DataReportMultiEventDelegate;

@interface DataReportMultiEventMonitor : MMUserService <MMServiceProtocol> {
    NSNumber *m_monitorSwitch;
    BOOL m_isOpenMonitor;
}

@property (weak, nonatomic) id<DataReportMultiEventDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isOpenMonitor;
- (void)startMonitor;
- (void)stopMonitor;
- (void)messageStart:(id)a0 event:(unsigned int)a1;
- (void)messageReturn:(id)a0 event:(unsigned int)a1;
- (void).cxx_destruct;

@end
