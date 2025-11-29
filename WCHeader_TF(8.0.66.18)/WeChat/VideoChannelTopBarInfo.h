@class NSString;

@interface VideoChannelTopBarInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *appid;
@property (nonatomic) int version;
@property (retain, nonatomic) NSString *logoUrl;
@property (nonatomic) unsigned int funcVersion;
@property (retain, nonatomic) NSString *defaultLogoUrl;
@property (retain, nonatomic) NSString *syncBuffer;
@property (nonatomic) unsigned int syncFlag;
@property (retain, nonatomic) NSString *dataBuffer;
@property (nonatomic) unsigned int interval;
@property (nonatomic) unsigned int intervalTl;
@property (nonatomic) unsigned int controlBits;
@property (retain, nonatomic) NSString *defaultTitle;
@property (nonatomic) unsigned int showGreenDot;
@property (retain, nonatomic) NSString *informMsgCnt;
@property (nonatomic) unsigned int showSmallIcon;
@property (retain, nonatomic) NSString *smallIconUrl;
@property (retain, nonatomic) NSString *appPath;
@property (retain, nonatomic) NSString *dmLogoUrl;
@property (retain, nonatomic) NSString *dmDefaultLogoUrl;

+ (void)initialize;

@end
