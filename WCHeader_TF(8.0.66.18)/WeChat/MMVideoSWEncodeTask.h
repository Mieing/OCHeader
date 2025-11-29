@class SWTranscoding;

@interface MMVideoSWEncodeTask : VideoEncodeTask

@property (retain, nonatomic) SWTranscoding *softExportSession;

- (void)exportAsynchronouslyWithCompletionHandler:(id /* block */)a0;
- (void)cleanExportSession;
- (void)stopExport;
- (void).cxx_destruct;

@end
