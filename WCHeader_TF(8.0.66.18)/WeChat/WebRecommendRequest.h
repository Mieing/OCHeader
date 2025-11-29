@class NSString, WebRecommendRequest_WSFloatingWindow, LbsLocationNew, NSMutableArray;

@interface WebRecommendRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int h5Version;
@property (nonatomic) unsigned int isHomePage;
@property (retain, nonatomic) NSString *keyword;
@property (retain, nonatomic) LbsLocationNew *location;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *searchId;
@property (nonatomic) unsigned int sceneActionType;
@property (nonatomic) unsigned int displayPattern;
@property (retain, nonatomic) NSMutableArray *extReqParams;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *source;
@property (nonatomic) unsigned int channelId;
@property (retain, nonatomic) NSString *navigationId;
@property (retain, nonatomic) NSString *redPointMsgId;
@property (retain, nonatomic) NSMutableArray *checkDocidList;
@property (nonatomic) unsigned int pos;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int fromPreTabChannelId;
@property (retain, nonatomic) WebRecommendRequest_WSFloatingWindow *floatingWindow;
@property (nonatomic) unsigned int count;
@property (nonatomic) BOOL isFromClient;
@property (nonatomic) unsigned int careMode;
@property (nonatomic) unsigned int youngMode;
@property (retain, nonatomic) NSString *adIdInfo;

+ (void)initialize;

@end
