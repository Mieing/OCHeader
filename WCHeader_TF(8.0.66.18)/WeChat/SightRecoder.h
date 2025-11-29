@class NSString, MMovieCompressor;

@interface SightRecoder : NSObject <MMovieCompressorDelegate>

@property (retain, nonatomic) NSString *srcVideoPath;
@property (retain, nonatomic) NSString *dstVideoPath;
@property (retain, nonatomic) MMovieCompressor *movieCompressor;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSourcePath:(id)a0 DestPath:(id)a1;
- (void)startRecodeWithCompletionHandler:(id /* block */)a0;
- (void)mergeVideoFromPath:(id)a0 andAudioFromPath:(id)a1 toPath:(id)a2 completionHandler:(id /* block */)a3;
- (void)mMovieCompressor:(id)a0 onMovieCompressFinished:(id)a1 thumbImg:(id)a2 ret:(unsigned int)a3;
- (void)mMovieCompressor:(id)a0 onMovieCompressFailed:(unsigned int)a1;
- (void).cxx_destruct;

@end
