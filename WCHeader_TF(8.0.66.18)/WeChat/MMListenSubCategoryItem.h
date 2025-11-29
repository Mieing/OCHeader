@class NSString, MMListenRecommendInfo;

@interface MMListenSubCategoryItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *categoryId;
@property (retain, nonatomic) NSString *categoryIdParent;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *cover;
@property (retain, nonatomic) NSString *author;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) int type;
@property (retain, nonatomic) NSString *headImg;
@property (nonatomic) BOOL mine;
@property (nonatomic) int listenNum;
@property (nonatomic) int likeNum;
@property (nonatomic) int shareNum;
@property (nonatomic) int itemNum;
@property (nonatomic) BOOL isLiked;
@property (retain, nonatomic) MMListenRecommendInfo *recommendInfo;

+ (void)initialize;

@end
