@class NSString;

@interface MMListenArticleInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *audioUrl;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *author;
@property (retain, nonatomic) NSString *cover;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *bizUsername;
@property (retain, nonatomic) NSString *albumId;
@property (retain, nonatomic) NSString *albumTitle;
@property (retain, nonatomic) NSString *albumUrl;
@property (retain, nonatomic) NSString *bizAppid;
@property (nonatomic) long long createTime;
@property (nonatomic) int duration;
@property (retain, nonatomic) NSString *headImg;
@property (retain, nonatomic) NSString *audioId;
@property (retain, nonatomic) NSString *audioTitle;
@property (nonatomic) BOOL isPlayable;
@property (retain, nonatomic) NSString *bizCategoryId;
@property (retain, nonatomic) NSString *albumCategoryId;
@property (nonatomic) unsigned int bizuin;
@property (retain, nonatomic) NSString *articleCategoryId;
@property (retain, nonatomic) NSString *descDetail;
@property (retain, nonatomic) NSString *videoId;
@property (retain, nonatomic) NSString *videoTitle;
@property (retain, nonatomic) NSString *videoUrl;
@property (nonatomic) unsigned long long articleFlag;
@property (nonatomic) unsigned int itemShowType;

+ (void)initialize;

@end
