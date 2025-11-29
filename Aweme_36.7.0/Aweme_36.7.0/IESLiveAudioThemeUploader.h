@class RACDisposable, NSProgress, TTHttpTask, IESLiveAudioThemeApi;

@interface IESLiveAudioThemeUploader : NSObject

@property (retain, nonatomic) IESLiveAudioThemeApi *api;
@property (copy, nonatomic) id /* block */ uploadCompletionBlock;
@property (retain, nonatomic) TTHttpTask *uploadTask;
@property (retain, nonatomic) NSProgress *uploadProgress;
@property (retain, nonatomic) RACDisposable *uploadProgressDisposable;

- (void)stopUploading;
- (id)precheckThemeWithAsset:(id)a0;
- (void)uploadImage:(id)a0 config:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (void)uploadAnimatedImage:(id)a0 config:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (void)uploadVideoWithUrl:(id)a0 config:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (id)checkAnimatedImageDuration:(id)a0;
- (void)uploadFileWithConstructingBodyWithBlock:(id /* block */)a0 config:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (void)uploadThemeWithAsset:(id)a0 config:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
