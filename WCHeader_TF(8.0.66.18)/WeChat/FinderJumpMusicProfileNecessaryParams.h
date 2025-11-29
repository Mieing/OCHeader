@class NSString, NSMutableArray;

@interface FinderJumpMusicProfileNecessaryParams : WXPBGeneratedMessage

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
@property (nonatomic) unsigned int musicPageType;
@property (retain, nonatomic) NSString *topicWording;
@property (retain, nonatomic) NSString *qqMusicSongId;
@property (retain, nonatomic) NSString *miaojianSdkPrefix;
@property (nonatomic) unsigned int likeFlag;
@property (retain, nonatomic) NSString *audioid;
@property (retain, nonatomic) NSString *listenSimplePlayInfoBase64;
@property (nonatomic) unsigned int likeAction;
@property (retain, nonatomic) NSString *listenCtxRecommendInfoBufferBase64;
@property (nonatomic) float speechProb;
@property (nonatomic) float speechAccProb;

+ (void)initialize;

@end
