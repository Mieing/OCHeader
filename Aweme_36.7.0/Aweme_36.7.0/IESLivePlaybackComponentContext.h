@class NSString, HTSLiveEpisode, NSDictionary, NSNumber, IESLivePlaybackEnterRoomTraceContext;

@interface IESLivePlaybackComponentContext : NSObject <IESVSMessageActionContextProtocol, IESLivePlaybackComponentContextService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HTSLiveEpisode *episode;
@property (retain, nonatomic) IESLivePlaybackEnterRoomTraceContext *enterTrace;
@property (retain, nonatomic) NSNumber *episodeID;
@property (copy, nonatomic) NSString *multiTabSelectTabId;
@property (copy, nonatomic) NSString *collectionId;
@property (nonatomic) unsigned long long enterType;
@property (nonatomic) double historyLocation;
@property (nonatomic) BOOL startHighlightFirst;
@property (nonatomic) BOOL standardHighlight;
@property (copy, nonatomic) NSString *highlightDescription;
@property (nonatomic) double highlightLocation;
@property (nonatomic) double liveAbsoluteDuration;
@property (nonatomic) double playerStartDuration;
@property (nonatomic) double playbackCreateTime;
@property (nonatomic) BOOL modelMatchedStandard;
@property (copy, nonatomic) NSString *modelMatchedDescription;
@property (nonatomic) double modelMatchedLocation;
@property (copy, nonatomic) NSString *videoPreLoadVid;
@property (copy, nonatomic) NSString *previousPage;
@property (nonatomic) BOOL isLogin;
@property (nonatomic) unsigned long long initOrientation;
@property (readonly, nonatomic) BOOL isStreamVertical;
@property (nonatomic) BOOL isSmoothEnterRoom;
@property (readonly, copy, nonatomic) NSString *nextEpisodeID;
@property (retain, nonatomic) NSString *searchParams;
@property (nonatomic) BOOL isFromLocal;
@property (copy, nonatomic) NSDictionary *originParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contextWithParameters:(id)a0;
+ (BOOL)verifiedLegalityParameters:(id)a0;
+ (BOOL)verifiedLegalityParams:(id)a0;
+ (id)contextForEpisode:(id)a0 withParameters:(id)a1 enterTrace:(id)a2;

- (void)updateContextWithParams:(id)a0;
- (void)updateContextForEpisode:(id)a0;
- (void)updateContextWithParameters:(id)a0;
- (void).cxx_destruct;

@end
