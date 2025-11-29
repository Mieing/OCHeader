@class NSString, NSMutableArray;

@interface EcsGiftReportMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableArray *exposeList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportCommonKV:(id)a0 value:(int)a1 extra:(id)a2;
- (void)reportSendCgi:(int)a0 extra:(id)a1;
- (void)reportGiftMsg:(int)a0 extra:(id)a1;
- (void)reportGiftMsgExpose:(id)a0;
- (void)reportGiftMsgClick:(id)a0;
- (void)resetGiftMsgExposeStatus;
- (id)genAndSaveNewChattingGiftToolSessionId;
- (id)getChattingGiftToolSessionId;
- (void)markExposeChattingToolGiftHasReddot:(BOOL)a0;
- (BOOL)getChattingToolGiftHasReddotWhenExpose;
- (void)reportGiftMsgMenuItemSelected:(id)a0 orderId:(id)a1;
- (void)reportGiftQuoteMsgSend:(id)a0;
- (void).cxx_destruct;

@end
