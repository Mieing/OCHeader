@class HTSEventContext;
@protocol IESLiveMonitor;

@interface IESLiveEffectDownloadTrackHandler : NSObject

@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (void)edl_monitorDownloadTaskCompleteWithEvent:(id)a0 filePath:(id)a1 duration:(double)a2 error:(id)a3 extra:(id)a4;
- (id)p_getFileSize:(id)a0;
- (void)edl_monitorWithEvent:(id)a0 error:(id)a1 extra:(id)a2;
- (void).cxx_destruct;

@end
