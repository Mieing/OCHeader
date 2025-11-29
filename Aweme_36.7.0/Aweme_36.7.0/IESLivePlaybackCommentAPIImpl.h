@class HTSLiveEpisode, NSDictionary, NSString;

@interface IESLivePlaybackCommentAPIImpl : NSObject <IESLivePlaybackCommentAPI>

@property (retain, nonatomic) HTSLiveEpisode *itemModel;
@property (retain, nonatomic) NSDictionary *extraParamsForOnce;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendComment:(id)a0 agressMsgId:(long long)a1 flowTime:(long long)a2 elapsedTime:(long long)a3 colors:(id)a4 episode:(id)a5 callback:(id /* block */)a6;
- (void)sendComment:(id)a0 flowTime:(long long)a1 elapsedTime:(long long)a2 callBack:(id /* block */)a3;
- (void)sendDanmaku:(id)a0 commentColors:(id)a1 flowTime:(long long)a2 elapsedTime:(long long)a3 callBack:(id /* block */)a4;
- (void)agreeCommentWithAggreeMsgId:(long long)a0 comment:(id)a1 commentColors:(id)a2 flowTime:(long long)a3 elapsedTime:(long long)a4 callBack:(id /* block */)a5;
- (void)searchSuggestUserWithParams:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;
- (id)episodeId;

@end
