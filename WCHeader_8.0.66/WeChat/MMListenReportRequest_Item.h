@class NSString;

@interface MMListenReportRequest_Item : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *listenId;
@property (nonatomic) int type;
@property (nonatomic) int timeCur;
@property (nonatomic) int timeTotal;
@property (retain, nonatomic) NSString *h5Url;
@property (retain, nonatomic) NSString *categoryId;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *tabSessionId;
@property (nonatomic) int playScene;
@property (retain, nonatomic) NSString *recommendId;
@property (nonatomic) int timeListen;
@property (retain, nonatomic) NSString *discoverLineId;
@property (retain, nonatomic) NSString *discoverId;
@property (retain, nonatomic) NSString *albumCategoryId;
@property (nonatomic) unsigned long long relatedListRequestId;
@property (retain, nonatomic) NSString *singerCategoryId;
@property (retain, nonatomic) NSString *categoryName;
@property (retain, nonatomic) NSString *playSameSongId;
@property (nonatomic) int timeListenMs;
@property (nonatomic) int timeTotalMs;
@property (nonatomic) int timeCurMs;

+ (void)initialize;

@end
