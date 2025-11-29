@class NSString, NSArray, GameChatMessageCellModel, GameCenterMessageRedPointInfo, NSDictionary, GameLifeConversationCellDataSource, GCCollectionViewManager, UILabel;

@interface GameChatNoticeAndMessageView : UIView <GameLifeConversationCellDataSourceDelegate>

@property (retain, nonatomic) GCCollectionViewManager *messageManager;
@property (retain, nonatomic) GameCenterMessageRedPointInfo *redPointInfo;
@property (retain, nonatomic) GameChatMessageCellModel *interActModel;
@property (retain, nonatomic) GameChatMessageCellModel *noticeModel;
@property (retain, nonatomic) GameLifeConversationCellDataSource *cellDataSource;
@property (retain, nonatomic) NSArray *chatModelArray;
@property (retain, nonatomic) UILabel *allLabel;
@property (retain, nonatomic) UILabel *emptyLabel;
@property (nonatomic) unsigned int sourceScene;
@property (copy, nonatomic) NSDictionary *extReportInfoDic;
@property (nonatomic) BOOL onlyPersonMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)dynamicMessageViewHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubViews;
- (void)setNoticeAndInteractMoelReport:(id)a0 withPostion:(unsigned int)a1;
- (void)loadAllUnreadAndMinCntContact;
- (void)onAllLabelTaped;
- (void)updateChatMessageModel;
- (id)getReportVc;
- (void)reportFixItem12909:(id)a0 withPositionId:(unsigned int)a1 iActionId:(long long)a2;
- (id)getGameChatMessageModelArray;
- (BOOL)updateInteractNoticeRedPoint:(BOOL)a0;
- (void)updateNoticeInterActModelUpdateTime:(id)a0;
- (void)reportCellModel:(id)a0 actionId:(int)a1;
- (void)reportConversationUIExposure;
- (void)onGameLifeConversationLoadResultChanged:(unsigned long long)a0 hasMore:(BOOL)a1;
- (void)onGameLifeConversationLoadResultError;
- (void)onGameLifeConversationLoadMoreResultChanged:(BOOL)a0;
- (void)onGameLifeConversationLoadMoreResultError;
- (void)onGameCenterMessageRedPointInfoChange:(id)a0;
- (void)onConversationUpdated;
- (void)dealloc;
- (void)unregisterExtension;
- (void).cxx_destruct;

@end
