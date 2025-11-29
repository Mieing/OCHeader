@class NSString;

@interface AffRoamConversationTimeRange : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *conversationId;
@property (nonatomic) unsigned long long fromTime;
@property (nonatomic) unsigned long long toTime;
@property (nonatomic) unsigned long long estimatedSize;
@property (nonatomic) BOOL fullDiff;
@property (nonatomic) unsigned long long fullDiffOffset;
@property (nonatomic) unsigned long long recoverTime;

+ (void)initialize;

@end
