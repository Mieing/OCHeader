@class NSString;

@interface TLRecCardAppMsg : WXPBGeneratedMessage

@property (nonatomic) unsigned int flag;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *digest;
@property (retain, nonatomic) NSString *contentUrl;
@property (retain, nonatomic) NSString *coverImgUrl;
@property (retain, nonatomic) NSString *coverImgUrl11;
@property (retain, nonatomic) NSString *coverImgUrl2351;
@property (nonatomic) unsigned int itemShowType;
@property (retain, nonatomic) NSString *videoId;
@property (nonatomic) unsigned int videoWidth;
@property (nonatomic) unsigned int videoHeight;
@property (nonatomic) unsigned int videoDuration;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSString *finderFeedXml;
@property (nonatomic) unsigned int styleFlag;

+ (void)initialize;

@end
