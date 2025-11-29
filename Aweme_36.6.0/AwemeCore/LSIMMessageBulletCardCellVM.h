@class NSString, LSIMBulletContainerContext;

@interface LSIMMessageBulletCardCellVM : LSIMMessageCardBaseCellVM

@property (retain, nonatomic) LSIMBulletContainerContext *bulletContext;
@property (copy, nonatomic) NSString *cellIdentifier;
@property (nonatomic) BOOL currentShopMarketNotificationOpen;
@property (nonatomic) BOOL currentShopServiceNotificationOpen;
@property (nonatomic) BOOL alreadyBindPushStatus;
@property (nonatomic) BOOL cardSending;
@property (nonatomic) BOOL cardSendSucceed;

- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (id)defaultTrackerParams;
- (void)updateDynamicSize:(struct CGSize { double x0; double x1; })a0;
- (void)prelayoutDidFinished:(id)a0;
- (void)handleMessage;
- (void)sendIMMessage;
- (void)setPushStatusManager:(id)a0;
- (id)processClientDataWithMessage:(id)a0;
- (id)_identifierInfoWithClientData:(id)a0;
- (BOOL)hasSendMethod;
- (void)sendBulletCardMessageWithAction:(id)a0 errorCode:(long long)a1 errorMsg:(id)a2 logid:(id)a3;
- (void).cxx_destruct;
- (BOOL)isSystemMessage;

@end
