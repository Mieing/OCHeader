@class NSString, FinderRecommendData_LiveItemInfo;

@interface FinderRecommendData : WXPBGeneratedMessage

@property (nonatomic) unsigned int bizuin;
@property (retain, nonatomic) NSString *headimgUrl;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int mbizuin;
@property (nonatomic) unsigned int mappmsgid;
@property (nonatomic) unsigned int midx;
@property (nonatomic) unsigned int isRecommend;
@property (retain, nonatomic) NSString *finderUin;
@property (retain, nonatomic) NSString *finderEncryptUserName;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *coverImgUrl;
@property (retain, nonatomic) NSString *finderObjectId;
@property (retain, nonatomic) NSString *finderExportId;
@property (retain, nonatomic) NSString *finderObjectNonceId;
@property (nonatomic) unsigned int finderMediaType;
@property (retain, nonatomic) NSString *finderExportUsername;
@property (nonatomic) unsigned int finderDuration;
@property (retain, nonatomic) NSString *primaryColor;
@property (nonatomic) unsigned int finderHeight;
@property (nonatomic) unsigned int finderWidth;
@property (nonatomic) unsigned int finderCoverHeight;
@property (nonatomic) unsigned int finderCoverWidth;
@property (nonatomic) unsigned int finderLikeCount;
@property (nonatomic) unsigned int finderCommentCount;
@property (nonatomic) unsigned int finderCreateTime;
@property (nonatomic) unsigned int showFinder;
@property (nonatomic) unsigned int alignment;
@property (nonatomic) unsigned int alignmentReal;
@property (nonatomic) unsigned long long objectFlag;
@property (nonatomic) unsigned int cardShowStyle;
@property (retain, nonatomic) FinderRecommendData_LiveItemInfo *liveInfo;
@property (retain, nonatomic) NSString *recommendReason;
@property (nonatomic) unsigned int recommendSendTime;
@property (retain, nonatomic) NSString *expType;
@property (retain, nonatomic) NSString *reportInfo;
@property (nonatomic) unsigned int msgRecType;
@property (nonatomic) unsigned int cardRecType;
@property (retain, nonatomic) NSString *finderSessionBuffer;
@property (retain, nonatomic) NSString *recInfo;
@property (nonatomic) unsigned int hasRedpacketCover;
@property (retain, nonatomic) NSString *recSummary;
@property (nonatomic) unsigned long long requestId;

+ (void)initialize;

@end
