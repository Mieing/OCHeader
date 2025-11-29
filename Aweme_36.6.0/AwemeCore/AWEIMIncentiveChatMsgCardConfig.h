@class NSString;

@interface AWEIMIncentiveChatMsgCardConfig : NSObject

@property (copy, nonatomic) NSString *selfSendTitle;
@property (copy, nonatomic) NSString *peerSendTitle;
@property (copy, nonatomic) NSString *selfSendSubtitle;
@property (copy, nonatomic) NSString *peerSendSubtitle;
@property (copy, nonatomic) NSString *selfSendBtn;
@property (copy, nonatomic) NSString *peerSendBtn;
@property (copy, nonatomic) NSString *selfSubtitleSchema;
@property (copy, nonatomic) NSString *peerSubtitleSchema;
@property (nonatomic) unsigned long long selfSendTitleSource;
@property (nonatomic) unsigned long long peerSendTitleSource;
@property (nonatomic) unsigned long long selfSendSubtitleSource;
@property (nonatomic) unsigned long long peerSendSubtitleSource;
@property (nonatomic) unsigned long long selfSendBtnSource;
@property (nonatomic) unsigned long long peerSendBtnSource;
@property (copy, nonatomic) NSString *configKey;

- (id)initWithMessageContentDict:(id)a0 andSettingsConfigDict:(id)a1;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
