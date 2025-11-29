@class HTSEventContext, NSString, IESLiveVSMessageBoardInputPanelConfig;

@interface IESLiveVSMessageBoardStore : NSObject

@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) NSString *plainText;
@property (retain, nonatomic) IESLiveVSMessageBoardInputPanelConfig *config;
@property (copy, nonatomic) NSString *contentDraft;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) long long tabType;
@property (copy, nonatomic) NSString *showType;
@property (copy, nonatomic) NSString *messageType;

- (id)commonParameters;
- (void)trackVSMessageBoardToolbarButtonClickWithPlace:(id)a0;
- (void)trackVSMessageBoardToolbarButtonShowWithPlace:(id)a0;
- (void)trackVSMessageBoardDressUpIconShowWithRedDotShowing:(BOOL)a0;
- (void)trackVSMessageBoardInputPanelShow;
- (void)trackVSMessageBoardInputPanelSendContent:(id)a0 success:(BOOL)a1 errorCode:(id)a2 errorMsg:(id)a3;
- (void)trackVSMessageBoardInputPanelSendClicked:(id)a0;
- (void)trackVSMessageBoardLoadOptimize:(long long)a0 andRequestFrom:(id)a1 andKeys:(id)a2;
- (void)trackVSMessageBoardDressUpIconClickWithRedDotShowing:(BOOL)a0 selected:(BOOL)a1;
- (void)trackVSMessageBoardSkinShow:(long long)a0 paidType:(long long)a1 hasPaid:(long long)a2;
- (void)trackVSMessageBoardMedalShow:(long long)a0 paidType:(long long)a1 hasPaid:(long long)a2;
- (void)trackVSMessageBoardSkinClick:(long long)a0 paidType:(long long)a1 hasPaid:(long long)a2;
- (void)trackVSMessageBoardMedalClick:(long long)a0 paidType:(long long)a1 hasPaid:(long long)a2;
- (void)trackVSMessageBoardBuyIconShow:(long long)a0 andMedalID:(long long)a1;
- (void)trackVSMessageBoardBuyIconClick:(long long)a0 andMedalID:(long long)a1;
- (id)tabNameString;
- (void).cxx_destruct;
- (id)init;
- (id)isReplay;

@end
