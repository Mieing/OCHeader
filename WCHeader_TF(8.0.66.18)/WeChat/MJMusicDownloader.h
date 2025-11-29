@class EditVideoBGMPlayer;
@protocol MMBGMSelectedMusicDataProtocol;

@interface MJMusicDownloader : NSObject

@property (nonatomic) BOOL isCancelled;
@property (retain, nonatomic) EditVideoBGMPlayer *bgmPlayer;
@property (retain, nonatomic) id<MMBGMSelectedMusicDataProtocol> firstMusicInfo;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)downloadFirstMusicWithTimeout:(double)a0 completionHandler:(id /* block */)a1;
- (void)handleMusicRecommendResult:(id)a0;
- (void)handleDownloadMusicResult:(BOOL)a0;
- (void)cancel;
- (void)callCompletionOnSucceesWithMusicInfo:(id)a0 musicFilePath:(id)a1;
- (void)callCompletionOnError:(id)a0;
- (id)convertMusicLyricInfos;
- (void).cxx_destruct;

@end
