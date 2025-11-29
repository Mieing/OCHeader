@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, MMStackReportConnectionDelegate;

@interface MMStackReportConnection : NSObject <IMatrixCustomIssueExt>

@property (retain, nonatomic) NSMutableArray *uploadedCustomIssue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reportQueue;
@property (weak, nonatomic) id<MMStackReportConnectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)stackReportWithData:(id)a0 reportType:(unsigned long long)a1;
- (void)stackReportDict:(id)a0 reportType:(unsigned long long)a1;
- (void)onCustomIssue:(id)a0 uploadComplete:(BOOL)a1;
- (void).cxx_destruct;

@end
