@class NSString;

@interface FinderContactMsgInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *msgUsername;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned int sourceType;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;
+ (void)initialize;

- (void)setSourceType:(unsigned int)a0;
- (unsigned int)sourceType;
- (void)setSessionId:(id)a0;
- (id)sessionId;
- (void)setMsgUsername:(id)a0;
- (id)msgUsername;
- (id)archivedWCTValue;

@end
