@class MMListenReportClientInfo, BaseRequest, NSString, NSData, MMListenMusicBaseRequest;

@interface MMListenSearchRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) MMListenMusicBaseRequest *musicBaseRequest;
@property (nonatomic) int type;
@property (retain, nonatomic) NSString *query;
@property (nonatomic) int offset;
@property (nonatomic) int count;
@property (nonatomic) int scene;
@property (nonatomic) BOOL isSug;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) int parentType;
@property (retain, nonatomic) NSString *preSearchId;
@property (retain, nonatomic) NSString *sugId;
@property (retain, nonatomic) MMListenReportClientInfo *reportClientInfo;
@property (retain, nonatomic) NSString *requestId;

+ (void)initialize;

@end
