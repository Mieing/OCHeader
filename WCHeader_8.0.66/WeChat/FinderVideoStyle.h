@class NSString;

@interface FinderVideoStyle : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *imgUrl;
@property (nonatomic) BOOL showPlayicon;
@property (nonatomic) BOOL showLikeicon;
@property (nonatomic) unsigned int likeCount;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;

+ (void)initialize;

@end
