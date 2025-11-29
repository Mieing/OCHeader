@class NSString, CMessageWrap;

@interface BESessionBoxInfo : NSObject

@property (nonatomic) unsigned int unReadCnt;
@property (retain, nonatomic) NSString *digest;
@property (nonatomic) unsigned int showRedDotType;
@property (retain, nonatomic) NSString *bizUsrName;
@property (nonatomic) unsigned long long lastMsgSvrId;
@property (nonatomic) BOOL needShowAllNoticeUnreadCntPrefix;
@property (nonatomic) BOOL needShowAllArticleUnreadCntPrefix;
@property (nonatomic) unsigned int unReadArticleMsgCnt;
@property (nonatomic) unsigned int unReadNotiMsgCnt;
@property (nonatomic) unsigned long long boxLatestMsgTime;
@property (nonatomic) unsigned int showLiveStatus;
@property (retain, nonatomic) NSString *reportJson;
@property (retain, nonatomic) CMessageWrap *lastMsg;
@property (retain, nonatomic) CMessageWrap *digestMsg;

- (id)description;
- (void).cxx_destruct;

@end
