@class DVEVideoThumbnailLoader, DVEVideoTrackThumbnail;

@interface DVEVideoThumbnailTask : NSOperation

@property (nonatomic) BOOL pIsFinished;
@property (nonatomic) BOOL pIsExecuting;
@property (retain, nonatomic) DVEVideoThumbnailLoader *loader;
@property (retain, nonatomic) DVEVideoTrackThumbnail *thumbnail;
@property (copy, nonatomic) id /* block */ completion;

- (id)initWithLoader:(id)a0 thumbnail:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)finish;
- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isExecuting;
- (void)main;
- (BOOL)isFinished;

@end
