@class NSString, FinderLiveBoxId;

@interface FinderLiveAppMsgLikeMsgInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long msgSeq;
@property (retain, nonatomic) FinderLiveBoxId *boxId;
@property (nonatomic) unsigned int opType;
@property (nonatomic) unsigned int totalLikeNum;
@property (nonatomic) BOOL isShowLikeNum;
@property (nonatomic) BOOL isSelfLike;
@property (retain, nonatomic) NSString *localCliMsgId;
@property (nonatomic) unsigned int originalCommentMsgType;

+ (void)initialize;

@end
