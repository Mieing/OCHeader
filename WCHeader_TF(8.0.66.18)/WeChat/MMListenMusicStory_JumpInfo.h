@class NSString;

@interface MMListenMusicStory_JumpInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int jumpType;
@property (retain, nonatomic) NSString *articleUrl;
@property (nonatomic) unsigned long long finderFeedId;
@property (retain, nonatomic) NSString *playListCategoryId;
@property (nonatomic) unsigned int playListCategoryType;
@property (retain, nonatomic) NSString *nonceId;

+ (void)initialize;

@end
