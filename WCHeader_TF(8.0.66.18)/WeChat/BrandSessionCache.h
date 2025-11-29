@class NSString, BESessionBoxInfo, CMessageWrap;

@interface BrandSessionCache : NSObject

@property (nonatomic) BOOL hasNewArrival;
@property (copy, nonatomic) NSString *latestMsgOwner;
@property (nonatomic) unsigned int unreadCount;
@property (nonatomic) BOOL showUnReadAsRedDot;
@property (nonatomic) unsigned int lastMsgTime;
@property (nonatomic) unsigned int starMsgCount;
@property (nonatomic) unsigned int massSendMsgCount;
@property (nonatomic) unsigned int notifyMsgCount;
@property (nonatomic) unsigned int notifyFlag;
@property (nonatomic) unsigned long long lastMsgAffMsgId;
@property (retain, nonatomic) CMessageWrap *latestMsg;
@property (retain, nonatomic) BESessionBoxInfo *affSessionBoxInfo;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
