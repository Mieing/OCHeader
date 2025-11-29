@class NSString;

@interface MMMsgMenuReporter : NSObject <MMMenuControllerExt>

@property (nonatomic) unsigned long long enterMenuTime;
@property (nonatomic) BOOL hasClicked;
@property (nonatomic) long long messageType;
@property (nonatomic) long long subMsgType;
@property (nonatomic) long long messageSvrId;
@property (nonatomic) int contentType;
@property (nonatomic) int sourceType;
@property (nonatomic) BOOL isSender;
@property (nonatomic) unsigned int msgCreateTime;
@property (nonatomic) unsigned int payInfoStatus;
@property (retain, nonatomic) NSString *giftOrderId;
@property (retain, nonatomic) NSString *chatName;
@property (nonatomic) int scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)active;
- (void)deactive;
- (void)setCurrentMsgWrap:(id)a0;
- (void)setSelectContentType:(int)a0;
- (void)setMenuSourceType:(int)a0;
- (void)onMenuControllerDidShow;
- (void)onMenuControllerDidShowWithExtraInfo:(id)a0;
- (void)onMenuControllerDidHide;
- (void)onMenuItemSelected:(id)a0 index:(long long)a1;
- (void)onMenuItemSelected:(id)a0 index:(long long)a1 extraInfo:(id)a2;
- (void)reportWithMenuType:(long long)a0 buttonLoc:(long long)a1 locationSeq:(long long)a2;
- (void)sdkReport:(id)a0 viewId:(id)a1 info:(id)a2;
- (void).cxx_destruct;

@end
