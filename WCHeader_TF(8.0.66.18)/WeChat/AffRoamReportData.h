@class NSString;

@interface AffRoamReportData : WXPBGeneratedMessage

@property (nonatomic) unsigned long long packageId;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) int taskType;
@property (nonatomic) unsigned long long elapsedTime;
@property (nonatomic) unsigned long long brDataSize;
@property (nonatomic) unsigned long long conversationCount;
@property (nonatomic) unsigned long long msgCount;
@property (nonatomic) unsigned long long mediaCount;
@property (nonatomic) unsigned long long selectedConversations;
@property (nonatomic) unsigned long long importedConversationCount;
@property (nonatomic) unsigned long long beginDuration;
@property (nonatomic) unsigned long long endDuration;
@property (nonatomic) unsigned long long recoverImportingDuration;
@property (nonatomic) unsigned long long fullDiffConversationCount;
@property (nonatomic) unsigned long long limitedFullDiffConversationCount;
@property (nonatomic) unsigned long long uploadMsgSize;
@property (nonatomic) unsigned long long uploadMediaSize;
@property (nonatomic) unsigned long long uploadIndexSize;

+ (void)initialize;

@end
