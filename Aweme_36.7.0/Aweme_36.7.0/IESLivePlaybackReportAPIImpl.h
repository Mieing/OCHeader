@class NSString;

@interface IESLivePlaybackReportAPIImpl : NSObject <IESLivePlaybackReportAPI>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportComment:(id)a0 commentId:(id)a1 agreeMsgId:(id)a2 roomId:(id)a3 episodeId:(id)a4 sender:(id)a5 callBack:(id /* block */)a6;

@end
