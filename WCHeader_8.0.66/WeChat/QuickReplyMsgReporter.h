@class NSString;

@interface QuickReplyMsgReporter : NSObject

@property (retain, nonatomic) NSString *messageId;
@property (retain, nonatomic) NSString *messageType;
@property (nonatomic) long long bannerType;
@property (retain, nonatomic) NSString *bannerMsg;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned int noticeTimestamp;
@property (nonatomic) unsigned int noticeType;
@property (nonatomic) unsigned int accountType;
@property (retain, nonatomic) NSString *liveId;
@property (retain, nonatomic) NSString *feedId;
@property (nonatomic) long long bizType;
@property (retain, nonatomic) NSString *bizInfo;
@property (nonatomic) long long currPage;

+ (id)getMessageId:(id)a0;
+ (id)getMessageType:(id)a0;

- (id)init;
- (void)reportAction:(long long)a0;
- (void)reportAction:(long long)a0 messages:(id)a1;
- (void)reportWithAction:(long long)a0 msgId:(id)a1 msgType:(id)a2 bannerType:(long long)a3 bannerMsg:(id)a4;
- (void)updateWithMessages:(id)a0;
- (id)getBannerMsg:(id)a0;
- (long long)getBannerType:(id)a0;
- (id)getPageName;
- (id)getUserName:(id)a0;
- (unsigned int)getNoticeTimestamp:(id)a0;
- (id)getContent:(id)a0;
- (unsigned int)getAccountType:(id)a0;
- (unsigned int)getNoticeType:(id)a0;
- (id)getLiveId:(id)a0;
- (id)getFeedId:(id)a0;
- (void)reportSystemConfig;
- (void)reportServiceNotifyBannerWithOpType:(unsigned int)a0;
- (void).cxx_destruct;

@end
