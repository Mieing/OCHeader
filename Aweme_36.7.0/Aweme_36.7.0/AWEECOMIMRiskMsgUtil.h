@class AWEECOMIMBaseMsgModel, NSMutableArray, AWEECOMIMDebounce;
@protocol AWEECOMIMPaasKVStoreProtocol;

@interface AWEECOMIMRiskMsgUtil : NSObject

@property (nonatomic) BOOL isShowedRisk;
@property (retain, nonatomic) NSMutableArray *waitRiskMsgQueue;
@property (retain, nonatomic) id<AWEECOMIMPaasKVStoreProtocol> kvStore;
@property (retain, nonatomic) AWEECOMIMDebounce *debounce;
@property (retain, nonatomic) AWEECOMIMBaseMsgModel *curShowMsgModel;
@property (copy, nonatomic) id /* block */ onTopBannerUpdate;
@property (copy, nonatomic) id /* block */ onRiskLinkClick;

- (void)addShowedMsgModel:(id)a0;
- (void)clickRiskMsgTopNoticeButton;
- (void)p_triggerShowWithMsg:(id)a0;
- (id)p_lastShowedRiskMsgInConversationIndexKeyWithCid:(id)a0;
- (id)p_showedRiskMsgTalkId:(id)a0;
- (void)p_saveShowedInfoWithMsgModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
