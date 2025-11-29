@class MMListenCircleXTopicItem, NSString, MMListenSimplePlaylistInfo, NSData, MMListenCircleXPoiInfo, NSMutableArray, MMListenCircleXUserInfo;

@interface MMListenCircleXPostInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long createTime;
@property (retain, nonatomic) MMListenCircleXUserInfo *authorInfo;
@property (nonatomic) int type;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSMutableArray *attachments;
@property (nonatomic) int likeNum;
@property (nonatomic) int commentNum;
@property (nonatomic) int publicLikeNum;
@property (nonatomic) int forwardNum;
@property (retain, nonatomic) MMListenCircleXPoiInfo *poiInfo;
@property (retain, nonatomic) NSString *recommendDesc;
@property (retain, nonatomic) NSMutableArray *commentList;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) BOOL isLike;
@property (retain, nonatomic) MMListenCircleXTopicItem *topic;
@property (nonatomic) BOOL showAuthorFollow;
@property (nonatomic) BOOL isAuthorFollow;
@property (retain, nonatomic) NSMutableArray *friendCommentList;
@property (nonatomic) BOOL isSelfLike;
@property (nonatomic) unsigned long long secureBits;
@property (retain, nonatomic) MMListenSimplePlaylistInfo *circlexPlaylist;
@property (retain, nonatomic) NSData *circlexPlaylistRecommendInfoBuffer;
@property (nonatomic) unsigned int exposeNum;
@property (nonatomic) BOOL isMine;
@property (nonatomic) unsigned int rating;
@property (retain, nonatomic) NSMutableArray *aggs;

+ (void)initialize;

@end
