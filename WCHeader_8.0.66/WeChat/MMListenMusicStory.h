@class NSString, MMListenMusicStory_JumpInfo, MMListenUserInfo, NSMutableArray;

@interface MMListenMusicStory : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *author;
@property (retain, nonatomic) NSString *bizUsername;
@property (retain, nonatomic) NSString *headImg;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *abstract;
@property (retain, nonatomic) MMListenUserInfo *authorInfo;
@property (retain, nonatomic) MMListenMusicStory_JumpInfo *jumpInfo;
@property (retain, nonatomic) NSString *storyListenId;
@property (retain, nonatomic) NSMutableArray *feedbackInfos;

+ (void)initialize;

@end
