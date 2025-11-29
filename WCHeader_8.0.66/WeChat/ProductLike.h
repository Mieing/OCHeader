@class NSString;

@interface ProductLike : WXPBGeneratedMessage

@property (nonatomic) BOOL showLikeBtn;
@property (nonatomic) BOOL userLiked;
@property (nonatomic) unsigned long long likeCount;
@property (retain, nonatomic) NSString *likeCountFmt;

+ (void)initialize;

@end
