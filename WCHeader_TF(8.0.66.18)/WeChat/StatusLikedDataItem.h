@class NSString;

@interface StatusLikedDataItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *headImgUrl;
@property (retain, nonatomic) NSString *hashUsername;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned long long likeId;

+ (void)initialize;

@end
