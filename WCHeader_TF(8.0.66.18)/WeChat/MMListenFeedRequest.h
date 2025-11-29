@class NSData, NSString, BaseRequest, MMListenMpInfo, MMListenMusicInfo, NSMutableArray, MMListenItem, MMListenFinderInfo;

@interface MMListenFeedRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (retain, nonatomic) NSString *categoryId;
@property (nonatomic) BOOL card;
@property (nonatomic) int itemCount;
@property (retain, nonatomic) MMListenMpInfo *mpCtx;
@property (nonatomic) int cardCount;
@property (nonatomic) int type;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *tabSessionId;
@property (nonatomic) BOOL switchCategory;
@property (retain, nonatomic) NSString *switchText;
@property (retain, nonatomic) MMListenMusicInfo *musicCtx;
@property (retain, nonatomic) NSMutableArray *topListenIds;
@property (retain, nonatomic) NSData *recommendBuffer;
@property (retain, nonatomic) NSString *listenId;
@property (nonatomic) int scene;
@property (retain, nonatomic) MMListenFinderInfo *finderCtx;
@property (nonatomic) int subType;
@property (retain, nonatomic) MMListenItem *listenCtx;

+ (void)initialize;

@end
