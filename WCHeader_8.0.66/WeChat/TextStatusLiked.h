@class NSString;

@interface TextStatusLiked : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *headImgUrl;
@property (retain, nonatomic) NSString *hashUsername;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned long long likeId;
@property (retain, nonatomic) NSString *encUsername;
@property (nonatomic) unsigned int source;

+ (void)initialize;

@end
