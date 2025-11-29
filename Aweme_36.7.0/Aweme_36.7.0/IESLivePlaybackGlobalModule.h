@class NSString;

@interface IESLivePlaybackGlobalModule : IESLiveModule <IESLivePlaybackGlobalModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)getVideoHistoryByEpisodeID:(long long)a0 OrEpisode:(id)a1;
- (double)getVideoDurationByEpisodeID:(long long)a0;

@end
