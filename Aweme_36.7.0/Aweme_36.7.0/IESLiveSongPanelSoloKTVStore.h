@class IESLiveKtvSongStruct, HTSEventContext, NSDictionary, NSString, IESLiveComponentContext, IESLiveInteractFeedbackViewModel;
@protocol IESLiveRoomService, IESLiveKTVMusicManagerProtocol;

@interface IESLiveSongPanelSoloKTVStore : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) id<IESLiveKTVMusicManagerProtocol> ktvMusicManager;
@property (retain, nonatomic) NSDictionary *settingConfig;
@property (retain, nonatomic) IESLiveKtvSongStruct *currentPlayKTVMusic;
@property (nonatomic) double currentPlayTime;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL enableKTVToneChange;
@property (nonatomic) long long requestMode;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) BOOL isSecondCut;
@property (nonatomic) BOOL isOrderPanlShow;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isSecondShow;
@property (copy, nonatomic) NSString *orderSongId;
@property (copy, nonatomic) NSString *inplaceCollectionId;
@property (nonatomic) BOOL isSearching;
@property (copy, nonatomic) NSString *designatedTabName;
@property (copy, nonatomic) id /* block */ onClickWaitingPromptsCompletion;
@property (retain, nonatomic) IESLiveInteractFeedbackViewModel *feedbackViewModel;
@property (retain, nonatomic) IESLiveInteractFeedbackViewModel *musicFeedbackViewModel;
@property (copy, nonatomic) NSString *fastStartTabName;
@property (nonatomic) long long fastStartFirstLevelIndex;
@property (copy, nonatomic) NSString *thirdPartyScene;
@property (copy, nonatomic) NSString *topSongId;

- (id)interactiveConnectionTrackParam;
- (void)prefetchMusicFeedbackListModelIfNeeded;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;

@end
