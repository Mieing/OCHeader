@protocol TSKReportReceiving;

@interface TSKReportManager : NSObject

@property (retain, nonatomic) id<TSKReportReceiving> receiver;

+ (id)sharedInstance;

- (void)setReportReceiver:(id)a0;
- (void)reportEvent:(id)a0 andParams:(id)a1;
- (void).cxx_destruct;

@end
