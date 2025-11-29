@class NSString;
@protocol IESLiveFullLinkMonitor;

@interface IESLiveShortTouchActionMonitor : NSObject

@property (retain, nonatomic) id<IESLiveFullLinkMonitor> innerMonitor;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *enterMethod;

- (void)didSetAttachingDIContext;
- (id)initWithEnterFrom:(id)a0 enterMethod:(id)a1;
- (void)reportEvent:(id)a0 category:(id)a1 metric:(id)a2 extra:(id)a3;
- (id)processReportAccessData:(id)a0;
- (void).cxx_destruct;

@end
