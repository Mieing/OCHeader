@class NSString, NSMutableArray;

@interface MMListenDiscoverItemInteractInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int likeNum;
@property (nonatomic) unsigned int thumbUpNum;
@property (nonatomic) unsigned int commentNum;
@property (nonatomic) unsigned int forwardNum;
@property (nonatomic) unsigned int giftNum;
@property (retain, nonatomic) NSMutableArray *comments;
@property (retain, nonatomic) NSString *listenId;
@property (retain, nonatomic) NSString *categoryId;
@property (nonatomic) BOOL isLiked;
@property (nonatomic) BOOL isThumbUp;
@property (nonatomic) BOOL isFav;
@property (retain, nonatomic) NSString *finderCommentAppname;
@property (retain, nonatomic) NSString *finderCommentEntityId;

+ (void)initialize;

@end
