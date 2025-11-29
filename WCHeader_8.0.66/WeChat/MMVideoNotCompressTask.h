@class MMAssetExportSession;

@interface MMVideoNotCompressTask : VideoEncodeTask

@property (retain, nonatomic) MMAssetExportSession *mmAssetExportSession;

+ (void)configureMMAssetExportSession:(id)a0 forEncodeScene:(unsigned long long)a1;

- (void)exportAsynchronouslyWithCompletionHandler:(id /* block */)a0;
- (void)cleanExportSession;
- (void)stopExport;
- (void).cxx_destruct;

@end
