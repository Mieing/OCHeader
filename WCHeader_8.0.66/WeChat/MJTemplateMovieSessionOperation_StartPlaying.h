@class NSString;

@interface MJTemplateMovieSessionOperation_StartPlaying : MJTemplateMovieSessionOperation

@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (retain, nonatomic) NSString *specificSegmentId;

- (id)initWithMaasSession:(id)a0 sessionKey:(id)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 completionHandler:(id /* block */)a3;
- (void)start;
- (id)boundTemplateId;
- (void)_startPlayingWithCompletionHandler:(id /* block */)a0;
- (void)_didCompleteWithError:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
