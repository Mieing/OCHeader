@class WWKFContactBindNotifyCtx, NSString, MMUIViewController, WWKFContentSendMsgInfo;

@interface WWKFOpenContactFlowContext : NSObject

@property (weak, nonatomic) MMUIViewController *viewController;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (nonatomic) int scene;
@property (copy, nonatomic) NSString *wwkfUrl;
@property (retain, nonatomic) WWKFContactBindNotifyCtx *notifyCtx;
@property (copy, nonatomic) NSString *sharecardTicket;
@property (copy, nonatomic) NSString *antispamAlertText;
@property (retain, nonatomic) WWKFContentSendMsgInfo *quickSendMsgInfo;
@property (nonatomic) BOOL bPopVCWhenLeave;
@property (nonatomic) BOOL hasUserConfirm;
@property (nonatomic) BOOL showPageSheet;
@property (nonatomic) BOOL confirmInHalfScreen;
@property (nonatomic) unsigned int actionType;
@property (retain, nonatomic) NSString *encUsername;

- (void).cxx_destruct;

@end
