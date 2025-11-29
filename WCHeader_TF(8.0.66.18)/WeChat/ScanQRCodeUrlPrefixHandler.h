@protocol ScanQRCodeUrlPrefixHandlerDelegate;

@interface ScanQRCodeUrlPrefixHandler : NSObject

@property (weak, nonatomic) id<ScanQRCodeUrlPrefixHandlerDelegate> m_delegate;
@property (nonatomic) long long m_A8KeyScene;

- (id)initWithDelegate:(id)a0 GetA8KeyScene:(long long)a1;
- (void)handleUrl:(id)a0;
- (id)matchingPrefix;
- (id)matchingPrefixes;
- (int)sessionPayChatType;
- (int)sessionPaySendType;
- (id)sessionPaySenderUserName;
- (id)sessionPayMsgId;
- (char)QRCodeType;
- (void).cxx_destruct;

@end
