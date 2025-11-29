@class IESLiveAnchorRoomConfigContext, NSString, NSArray, IESLivePreloadConfig, NSDictionary, IESLiveInteractionLayout, NSNumber, IESLiveComponentDiffConfig;
@protocol IESLivePreviewRoomService;

@interface IESLiveComponentContext : NSObject

@property (nonatomic) BOOL isDraw;
@property (copy, nonatomic) NSDictionary *extraDict;
@property (nonatomic) BOOL isRutrunBack;
@property (nonatomic) BOOL isFromMatchRoom;
@property (retain, nonatomic) NSString *originSchemaExtraParams;
@property (nonatomic) BOOL hasFinishCountdownTask;
@property (copy, nonatomic) NSString *uuidStr;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) unsigned long long livePhase;
@property (nonatomic) long long scene;
@property (retain, nonatomic) NSArray *supportScenes;
@property (nonatomic) BOOL isRightPanEnabled;
@property (nonatomic) BOOL canSwitchToFullScreen;
@property (nonatomic) BOOL enableFeedDrawer;
@property (retain, nonatomic) NSString *nearbyCityCode;
@property (nonatomic) BOOL enableNearbyTVDrawer;
@property (retain, nonatomic) IESLiveAnchorRoomConfigContext *anchorRoomContext;
@property (nonatomic) BOOL autoShowInvitePanel;
@property (copy, nonatomic) NSDictionary *autoShowInvitePanelExtraTrackParams;
@property (nonatomic) double enterRoomTimestamp;
@property (nonatomic) BOOL disableRepeatedlyEnter;
@property (retain, nonatomic) NSString *extraPangleSchemeParams;
@property (retain, nonatomic) NSString *liveShortTouchParams;
@property (copy, nonatomic) NSDictionary *schemaParams;
@property (weak, nonatomic) id ktvPreStreamContext;
@property (retain, nonatomic) IESLiveInteractionLayout *preStreamEnterRoomLayout;
@property (copy, nonatomic) NSArray *preStreamEnterRoomUserList;
@property (nonatomic) long long action_source;
@property (retain, nonatomic) NSNumber *innerFeedHasMore;
@property (nonatomic) BOOL isInnerFromDrawer;
@property (retain, nonatomic) NSString *aggregateColumnName;
@property (nonatomic) BOOL enterByPinch;
@property (nonatomic) BOOL isFromPreviewEnter;
@property (copy, nonatomic) id /* block */ micLinkUserIDs;
@property (copy, nonatomic) NSString *strategySDKKey;
@property (nonatomic) BOOL joinChorus;
@property (copy, nonatomic) NSString *originEnterFrom;
@property (copy, nonatomic) NSString *originEnterMethod;
@property (nonatomic) unsigned long long initOrientation;
@property (retain, nonatomic) NSNumber *multiTabID;
@property (retain, nonatomic) NSNumber *seekTime;
@property (retain, nonatomic) NSNumber *raceCollectionItemId;
@property (nonatomic) BOOL isInnerFeedPrestreamEnterRoom;
@property (copy, nonatomic) NSString *sharePlatform;
@property (copy, nonatomic) NSString *originCameraID;
@property (nonatomic) BOOL openDrawer;
@property (nonatomic) double currentWatchTime;
@property (nonatomic) BOOL didSeekTime;
@property (nonatomic) BOOL didStartFromHighlight;
@property (copy, nonatomic) NSDictionary *businessParams;
@property (copy, nonatomic) NSString *sourceBtmToken;
@property (nonatomic) unsigned long long currentScene;
@property (retain, nonatomic) id<IESLivePreviewRoomService> previewRoomServicee;
@property (retain, nonatomic) IESLiveComponentDiffConfig *diffConfig;
@property (retain, nonatomic) IESLivePreloadConfig *preloadConfig;

+ (id)activityParamsWithContext:(id)a0 schemaExtraParams:(id)a1;

- (id)linkmicKtvSongId;
- (id)linkmicKtvSongName;
- (id)activityParams;
- (id)countdownParams;
- (id)relevantShortVideoInfo;
- (id)sendGiftExtraParams;
- (BOOL)isFirstRoom;
- (id)musicDetailTopSongID;
- (id)musicDetailTopSongName;
- (id)musicDetailTS;
- (void).cxx_destruct;
- (id)init;
- (id)applyType;
- (id)cellIndex;

@end
