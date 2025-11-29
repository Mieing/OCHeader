@class NSError, NSString, UIImage, OMJMovieSession, OMJMaasCore, OMJMovieExportSettings, OMJTemplateInfo, OMJMusicInfo;

@interface MJTemplateSessionExportOperation : NSObject

@property (copy, nonatomic) NSString *sessionKey;
@property (nonatomic) long long status;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ resultHandler;
@property (retain, nonatomic) OMJTemplateInfo *templateInfo;
@property (retain, nonatomic) OMJMusicInfo *musicInfo;
@property (retain, nonatomic) UIImage *coverImage;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) OMJMaasCore *maasCore;
@property (readonly, nonatomic) OMJMovieSession *maasSession;
@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (readonly, copy, nonatomic) NSString *outputFilePath;
@property (readonly, nonatomic) OMJMovieExportSettings *exportSettings;
@property (copy, nonatomic) id /* block */ statusChangedHandler;

- (id)initWithMaasCore:(id)a0 maasSession:(id)a1 sessionKey:(id)a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a3 outputFilePath:(id)a4 exportSettings:(id)a5 progressHandler:(id /* block */)a6 resultHandler:(id /* block */)a7;
- (void)dealloc;
- (void)start;
- (void)pause;
- (void)resume;
- (void)_loadExportInfo;
- (void)_startExporting;
- (void)_pauseExporting;
- (void)_updateStatus:(long long)a0;
- (void)_didCompleteWithError:(id)a0 resultHandler:(id /* block */)a1;
- (void)exportCreationWithProgressHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)cancelExportingCreationWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
