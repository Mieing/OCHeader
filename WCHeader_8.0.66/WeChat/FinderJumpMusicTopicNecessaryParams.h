@class NSString, NSMutableArray;

@interface FinderJumpMusicTopicNecessaryParams : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *topicId;
@property (retain, nonatomic) NSString *byPassInfo;
@property (retain, nonatomic) NSMutableArray *singers;
@property (retain, nonatomic) NSString *musicId;
@property (retain, nonatomic) NSString *songName;
@property (retain, nonatomic) NSString *songTitle;
@property (retain, nonatomic) NSString *musicAppId;
@property (retain, nonatomic) NSString *albumUrl;
@property (retain, nonatomic) NSString *musicGetLinkMid;
@property (retain, nonatomic) NSString *musicWebUrl;
@property (nonatomic) unsigned int duration;
@property (nonatomic) unsigned int opSwitch;
@property (nonatomic) unsigned int hideFlag;

+ (void)initialize;

@end
