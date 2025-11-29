@protocol IESLiveMultiLinkerProvider, IESLivePKProvider;

@interface IESLiveRevenueInteractLynxDataModel : NSObject

@property (nonatomic) unsigned long long scene;
@property (weak, nonatomic) id<IESLivePKProvider> pkProvider;
@property (weak, nonatomic) id<IESLiveMultiLinkerProvider> multiLinkerProvider;
@property (nonatomic) long long lynxPlayState;
@property (nonatomic) long long playRemainTimeInt;
@property (nonatomic) long long punishRemainTimeInt;

- (id)currentLayoutTypeStr;
- (id)battleSettings;
- (id)playStatus;
- (id)playModel;
- (id)remainTime;
- (id)cleanScreen;
- (id)interactStartTime;
- (id)teamTask;
- (id)guestInfo;
- (id)sei;
- (id)interactProvider;
- (id)propCardInfo;
- (id)punishUserIds;
- (id)initWithDIContext:(id)a0 scene:(unsigned long long)a1;
- (id)getDataWithTag:(id)a0;
- (id)getDataWithTags:(id)a0;
- (id)getDataWithTagsOpt:(id)a0;
- (id)interactDataDic;
- (id)getDataWithTagOpt:(id)a0;
- (id)linkAnchorList;
- (id)interactTimerCount;
- (id)linkmicScore;
- (id)doubleMuteStatus;
- (id)intercomData;
- (id)playScores;
- (id)playRemainTime;
- (id)survivalRemainTime;
- (id)survivalStageIndex;
- (id)showLastResult;
- (id)contributionList;
- (id)playAnchorList;
- (id)revOnlineList;
- (id)aiAnchorList;
- (id)interactUserListToJSONArr:(id)a0;
- (id)aiUserListToJSONArr:(id)a0;
- (id)teamInfo;
- (void).cxx_destruct;
- (id)channelID;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerFrame;
- (id)screenInfo;
- (id)loadSource;

@end
