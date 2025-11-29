@protocol TRKReportReceiving;

@interface TRKReportManager : NSObject

@property (retain, nonatomic) id<TRKReportReceiving> receiver;

+ (id)sharedInstance;

- (void)setReportReceiver:(id)a0;
- (void)reportEvent:(id)a0 andParams:(id)a1;
- (void).cxx_destruct;

@end
