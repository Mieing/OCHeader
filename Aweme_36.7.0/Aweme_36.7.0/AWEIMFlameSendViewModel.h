@class NSString, AWEInteractModularizationHotsoonFlameModel;

@interface AWEIMFlameSendViewModel : NSObject <AWEIMFlameSendViewModelProtocol>

@property (retain, nonatomic) AWEInteractModularizationHotsoonFlameModel *flameModel;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWENoticeModuleServiceDOUYINHTSAdaperClass;

- (BOOL)hasReply;
- (void)trackButtonShowWithHasReply:(BOOL)a0;
- (id)sendText;
- (id)orderText;
- (unsigned long long)orderButtonStatus;
- (BOOL)isOfficialAccount;
- (BOOL)hasOrderButton;
- (void)updateHasReply:(BOOL)a0;
- (void)clickFlameReplyWithCompletion:(id /* block */)a0;
- (void)clickFlameSendWithCompletion:(id /* block */)a0;
- (void)clickFlameOrderWithCompletion:(id /* block */)a0;
- (void)trackWithButtonEvent:(id)a0 actionType:(id)a1;
- (id)aAWENoticeModuleServiceDOUYINHTSAdaper;
- (id)initWithFlameModel:(id)a0 userID:(id)a1 secUserID:(id)a2;
- (void).cxx_destruct;
- (id)replyText;

@end
