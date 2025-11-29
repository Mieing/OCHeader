@class NSString, TingAuditoryEnhanceArgs;

@interface TingPlayerEventContext : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *message;
@property (nonatomic) unsigned int stopPlayReason;
@property (retain, nonatomic) TingAuditoryEnhanceArgs *auditoryEnhArgs;

+ (void)initialize;

@end
