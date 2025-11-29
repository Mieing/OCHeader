@class NSString;
@protocol ACCBgmDownloadOperationDelegate, ACCMusicModelProtocol;

@interface ACCBgmDownloadOperation : NSOperation {
    BOOL _isExecuting;
    BOOL _isFinished;
}

@property (retain, nonatomic) NSString *musicId;
@property (retain, nonatomic) id<ACCMusicModelProtocol> music;
@property (weak, nonatomic) id<ACCBgmDownloadOperationDelegate> delegate;
@property (copy, nonatomic) id /* block */ processBlock;
@property (copy, nonatomic) id /* block */ resultBlock;

- (id)initWithMusic:(id)a0;
- (id)initWithMusicId:(id)a0;
- (void)didFailWithError:(id)a0 code:(long long)a1;
- (void)downloadMusicData;
- (void)didCancel;
- (void).cxx_destruct;
- (id)description;
- (void)finish;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (void)main;
- (void)cancel;
- (BOOL)isFinished;

@end
