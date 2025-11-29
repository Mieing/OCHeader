@class AWEIMAudioEmojiPlayConfig, AWEIMAudioPlayStatusObserver;
@protocol AWEIMAudioEmojiPlayerDelegate;

@interface AWEIMAudioEmojiPlayer : NSObject

@property (retain, nonatomic) AWEIMAudioEmojiPlayConfig *config;
@property (retain, nonatomic) AWEIMAudioPlayStatusObserver *playObserver;
@property (nonatomic) BOOL disableAutoPlayAfterDownloadFlag;
@property (nonatomic) unsigned long long status;
@property (weak, nonatomic) id<AWEIMAudioEmojiPlayerDelegate> delegate;

- (void)handleAppWillResignActiveNotification:(id)a0;
- (void)p_initObserver;
- (void)p_stopAudioPlay;
- (void)p_startAudioPlay;
- (void)p_downloadAudioWithEmoticon:(id)a0 completion:(id /* block */)a1;
- (id)p_getPlayId;
- (void)p_updateStatusWithAudioPlayStatus:(unsigned long long)a0;
- (void)p_realPlayAudioWithEmoticon:(id)a0 conversationID:(id)a1;
- (void)p_changeStatusTo:(unsigned long long)a0;
- (void)didClickAudioEmoji;
- (void)startPlayAudio;
- (void)stopPlayAudio;
- (void)prefetchAudioIfNeeded;
- (id)currentEmoticonModel;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
