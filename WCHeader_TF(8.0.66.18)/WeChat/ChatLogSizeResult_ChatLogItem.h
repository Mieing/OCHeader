@class NSString;

@interface ChatLogSizeResult_ChatLogItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *contact;
@property (nonatomic) unsigned long long size;
@property (nonatomic) BOOL fullDiff;
@property (nonatomic) unsigned long long recoverTime;

+ (void)initialize;

@end
