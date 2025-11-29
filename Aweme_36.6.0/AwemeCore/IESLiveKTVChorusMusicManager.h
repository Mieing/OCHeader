@class IESLiveKTVChorusApi, NSArray, NSString;

@interface IESLiveKTVChorusMusicManager : NSObject <HTSLiveMessageSubscriber, IESLiveKTVChorusActions>

@property (retain, nonatomic) IESLiveKTVChorusApi *api;
@property (copy, nonatomic) NSArray *chorusOrderList;
@property (copy, nonatomic) NSArray *chorusSelfSeeingList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void)willChorusStart:(id)a0;
- (void)didChorusStarted:(id)a0;
- (id)getRemoteSongStructWithMusicID:(id)a0;
- (id)ktvMusicManager;
- (void)willSongListChange:(id)a0;
- (void)checkDownloadMusic;
- (void)p_noticeKtvOrderList;
- (void)updateChorusOrderlist:(id)a0;
- (void)fetchChorusOrderlist:(id /* block */)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (BOOL)isDownloading:(id)a0;

@end
