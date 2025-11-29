@class NSString, NSMutableArray;

@interface StatusCommentRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *commentId;
@property (nonatomic) int commentType;
@property (retain, nonatomic) NSString *statusId;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) long long timeLimitMs;
@property (nonatomic) int countLimit;
@property (nonatomic) int readType;
@property (nonatomic) int notifyType;
@property (retain, nonatomic) NSMutableArray *dbState;
@property (retain, nonatomic) NSString *exceptUserName;
@property (nonatomic) long long timeMaxMs;

+ (void)initialize;

- (void)setTimeMaxMs:(long long)a0;
- (long long)timeMaxMs;
- (void)setExceptUserName:(id)a0;
- (id)exceptUserName;
- (void)setDbState:(id)a0;
- (id)dbState;
- (void)setNotifyType:(int)a0;
- (int)notifyType;
- (void)setReadType:(int)a0;
- (int)readType;
- (void)setCountLimit:(int)a0;
- (int)countLimit;
- (void)setTimeLimitMs:(long long)a0;
- (long long)timeLimitMs;
- (void)setUserName:(id)a0;
- (id)userName;
- (void)setStatusId:(id)a0;
- (id)statusId;
- (void)setCommentType:(int)a0;
- (int)commentType;
- (void)setCommentId:(id)a0;
- (id)commentId;

@end
