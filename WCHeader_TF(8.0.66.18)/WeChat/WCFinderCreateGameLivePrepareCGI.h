@class GameTeamUpSpecialGiftSettingDetail, NSString, MMLiveTaskId, MMFinderLiveCreateParamsModel, FinderMedia, FinderLocation;

@interface WCFinderCreateGameLivePrepareCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) MMFinderLiveCreateParamsModel *createLiveGeneralParamsModel;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) MMLiveTaskId *liveTaskId;
@property (retain, nonatomic) FinderMedia *coverImg;
@property (retain, nonatomic) NSString *liveDescription;
@property (retain, nonatomic) NSString *liveDescriptionExtend;
@property (retain, nonatomic) FinderLocation *location;
@property (retain, nonatomic) NSString *liveGameAuthTicket;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) int liveScene;
@property (nonatomic) unsigned int joinTeamMode;
@property (nonatomic) unsigned int anchorSwitchFlag;
@property (nonatomic) unsigned int platformId;
@property (retain, nonatomic) NSString *gameUserId;
@property (retain, nonatomic) GameTeamUpSpecialGiftSettingDetail *specialGiftSetting;

- (id)initWithFinderUsername:(id)a0 liveTaskId:(id)a1 coverImg:(id)a2 liveDescription:(id)a3 liveDescriptionExtend:(id)a4 liveGameAuthTicket:(id)a5 appId:(id)a6 liveScene:(int)a7 location:(id)a8 joinTeamMode:(unsigned int)a9 specialGiftSetting:(id)a10 generalParamsModel:(id)a11 anchorSwitchFlag:(unsigned int)a12 platformId:(unsigned int)a13 gameUserId:(id)a14 lotteryPanel:(id)a15 successBlock:(id /* block */)a16 failBlock:(id /* block */)a17;
- (void)createRequest;
- (id)getWordingInfo;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
