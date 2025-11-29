@class NSString, NSData;

@interface FinderMentionExtInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *entityId;
@property (retain, nonatomic) NSData *extBuff;
@property (nonatomic) unsigned long long bulletCommentTimestamp;
@property (retain, nonatomic) NSData *bypassBuffer;
@property (nonatomic) unsigned int bypassBufferType;
@property (nonatomic) unsigned long long replyCommentTimestamp;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;
+ (void)initialize;

- (void)setReplyCommentTimestamp:(unsigned long long)a0;
- (unsigned long long)replyCommentTimestamp;
- (void)setBypassBufferType:(unsigned int)a0;
- (unsigned int)bypassBufferType;
- (void)setBypassBuffer:(id)a0;
- (id)bypassBuffer;
- (void)setBulletCommentTimestamp:(unsigned long long)a0;
- (unsigned long long)bulletCommentTimestamp;
- (void)setExtBuff:(id)a0;
- (id)extBuff;
- (void)setEntityId:(id)a0;
- (id)entityId;
- (void)setAppName:(id)a0;
- (id)appName;
- (id)archivedWCTValue;

@end
