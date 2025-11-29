@class NSString;

@interface MMLiveBaseReportHandler : NSObject <MMLiveReportEventMgrExt>

@property (nonatomic) unsigned int logId;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) BOOL autoTackEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)report;
- (void).cxx_destruct;

@end
