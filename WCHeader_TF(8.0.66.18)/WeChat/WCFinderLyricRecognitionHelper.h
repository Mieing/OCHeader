@class NSString;

@interface WCFinderLyricRecognitionHelper : NSObject

@property (retain, nonatomic) NSString *videoPath;

+ (id)helperWithVideoPath:(id)a0;

- (id)initWithVideoPath:(id)a0;
- (void)run:(id /* block */)a0;
- (void)onExportFinish:(id)a0 complete:(id /* block */)a1;
- (void)uploadFileThenRecognit:(id)a0 complete:(id /* block */)a1;
- (void).cxx_destruct;

@end
