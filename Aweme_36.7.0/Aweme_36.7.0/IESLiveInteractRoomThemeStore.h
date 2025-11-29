@class IESLiveRoomThemeData, HTSEventContext, NSArray, HTSLiveAudioBGData, IESLiveComponentContext, NSString, IESLiveAudioThemeApi;
@protocol IESLiveRoomService;

@interface IESLiveInteractRoomThemeStore : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) IESLiveAudioThemeApi *api;
@property (copy, nonatomic) NSArray *partyThemeList;
@property (retain, nonatomic) HTSLiveAudioBGData *partyChoiceTheme;
@property (retain, nonatomic) NSString *partyChoiceImageUri;
@property (retain, nonatomic) HTSLiveAudioBGData *partyConfigTheme;
@property (retain, nonatomic) IESLiveRoomThemeData *partyRoomThemeData;
@property (retain, nonatomic) NSString *partyImageUri;
@property (copy, nonatomic) NSArray *ktvThemeList;
@property (retain, nonatomic) HTSLiveAudioBGData *ktvChoiceTheme;
@property (retain, nonatomic) NSString *ktvChoiceImageUri;
@property (retain, nonatomic) HTSLiveAudioBGData *ktvConfigTheme;
@property (retain, nonatomic) IESLiveRoomThemeData *ktvRoomThemeData;
@property (retain, nonatomic) NSString *ktvImageUri;
@property (nonatomic) BOOL canReportItemShow;
@property (nonatomic) BOOL hasTrackDuration;
@property (nonatomic) double themeStartTime;
@property (retain, nonatomic) IESLiveRoomThemeData *audienceRoomThemeData;

- (void)loadDataCompletion:(id /* block */)a0;
- (id)initWithRoom:(id)a0 trackContext:(id)a1 componentContext:(id)a2;
- (void)setTheme:(id)a0 roomID:(id)a1 anchorID:(id)a2 imageType:(id)a3 bgType:(int)a4 completion:(id /* block */)a5;
- (void)themeEntranceDidClick:(BOOL)a0;
- (void)themeEntranceDidShow:(BOOL)a0;
- (void)p_trackThemeEntranceDidShow:(BOOL)a0;
- (void)p_trackThemeEntranceDidClick:(BOOL)a0;
- (void)updateAnchorRoomThemeData:(id)a0 forBgType:(int)a1;
- (void)handlePartyThemeList:(id)a0 error:(id)a1;
- (void)handleKtvThemeList:(id)a0 error:(id)a1;
- (void)fetchThemeListWithAnchorId:(id)a0 roomId:(id)a1 bgType:(int)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)loadData:(long long)a0;

@end
