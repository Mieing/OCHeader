@interface FinderWxPersonalizedSetting : WXPBGeneratedMessage

@property (nonatomic) BOOL allowRecommendVideo;
@property (nonatomic) BOOL allowRecommendLive;
@property (nonatomic) BOOL allowWxmentionreddotLikemessage;
@property (nonatomic) BOOL allowWxmentionreddotCommentmessage;

+ (void)initialize;

- (void)setAllowWxmentionreddotCommentmessage:(BOOL)a0;
- (BOOL)allowWxmentionreddotCommentmessage;
- (void)setAllowWxmentionreddotLikemessage:(BOOL)a0;
- (BOOL)allowWxmentionreddotLikemessage;
- (void)setAllowRecommendLive:(BOOL)a0;
- (BOOL)allowRecommendLive;
- (void)setAllowRecommendVideo:(BOOL)a0;
- (BOOL)allowRecommendVideo;

@end
