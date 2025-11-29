@class NSString;
@protocol IESLiveKTVFullLinkMonitor;

@interface IESLiveKTVFullLinkMusicMonitor : NSObject <IESLiveKTVFullLinkMusicMonitor>

@property (retain, nonatomic) id<IESLiveKTVFullLinkMonitor> fullMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)monitorMultiKTVRequesrSongWithProcess:(id)a0 musicModel:(id)a1 extra:(id)a2;
- (void)monitorKTVMultiChorusJoinWithProcess:(id)a0 musicModel:(id)a1 extra:(id)a2;
- (void)monitorSongDownloadWithProcess:(id)a0 musicModel:(id)a1 extra:(id)a2;
- (void)p_monitorRequesrSongWithProcess:(id)a0 event:(id)a1 musicModel:(id)a2 extra:(id)a3;
- (void).cxx_destruct;

@end
