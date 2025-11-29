@class NSString, NSData;

@interface ReportRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *searchId;
@property (retain, nonatomic) NSString *recommendId;
@property (nonatomic) unsigned long long businessType;
@property (retain, nonatomic) NSString *docId;
@property (nonatomic) unsigned int docPos;
@property (nonatomic) unsigned int typePos;
@property (nonatomic) unsigned int isHomePage;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int expand1;
@property (retain, nonatomic) NSString *suggestionId;
@property (nonatomic) unsigned int clickType;
@property (retain, nonatomic) NSString *expand2;
@property (retain, nonatomic) NSString *logString;
@property (nonatomic) unsigned int clickSource;
@property (nonatomic) unsigned int sceneActionType;
@property (nonatomic) unsigned int h5Version;
@property (retain, nonatomic) NSString *query;
@property (nonatomic) unsigned int resultType;
@property (nonatomic) unsigned int weAppH5Version;
@property (retain, nonatomic) NSData *jumpUrl;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned int itemType;
@property (retain, nonatomic) NSString *expand;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *bizName;
@property (retain, nonatomic) NSString *clickZone;
@property (retain, nonatomic) NSString *netType;
@property (retain, nonatomic) NSData *requestId;
@property (nonatomic) unsigned int channelid;
@property (retain, nonatomic) NSData *clickContent;
@property (nonatomic) unsigned int reqSubType;
@property (nonatomic) unsigned int resultSubType;
@property (retain, nonatomic) NSData *parentSearchId;
@property (nonatomic) unsigned int reqBusinessType;
@property (retain, nonatomic) NSData *boxId;
@property (retain, nonatomic) NSString *cdnHttpHead;
@property (retain, nonatomic) NSString *videoUrl;
@property (retain, nonatomic) NSString *byPass;
@property (nonatomic) unsigned int source;

+ (void)initialize;

@end
