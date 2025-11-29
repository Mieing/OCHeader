@class HTSEventContext, HTSLiveEpisode, IESLivePlaybackComponentContext, NSString;
@protocol IESLivePlaybackReportAPI;

@interface IESLivePlaybackReportStore : NSObject <IESLivePlaybackReportAction>

@property (retain, nonatomic) IESLivePlaybackComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) HTSLiveEpisode *videoRoom;
@property (retain, nonatomic) id<IESLivePlaybackReportAPI> api;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithContext:(id)a0 trackContext:(id)a1;

- (id)reportScene:(unsigned long long)a0;
- (void)loginWithCompletion:(id /* block */)a0;
- (void)didUpdatePlaybackEpisode:(id)a0;
- (void)reportComment:(id)a0 contentId:(id)a1 agreeMsgId:(id)a2 commentType:(id)a3 sender:(id)a4 source:(unsigned long long)a5 completion:(id /* block */)a6;
- (void)reportWebCommentWithParams:(id)a0 source:(unsigned long long)a1;
- (void)reportRoom:(unsigned long long)a0;
- (void)reportUser:(id)a0 source:(unsigned long long)a1;
- (void)trackEvent:(id)a0 reportedUser:(id)a1 reportedComment:(id)a2 reportedCommentType:(id)a3 reportType:(id)a4 source:(unsigned long long)a5;
- (id)requestPageForSource:(unsigned long long)a0;
- (id)reportShowType:(unsigned long long)a0;
- (void)reportOnPortrait:(id /* block */)a0;
- (id)paramsWithSource:(unsigned long long)a0 andReportedUser:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)roomID;
- (id)episodeID;
- (id)roomOwner;

@end
