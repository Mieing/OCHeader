@class NSData;

@interface MMListenSyncContext : WXPBGeneratedMessage

@property (nonatomic) unsigned long long seq;
@property (nonatomic) int type;
@property (retain, nonatomic) NSData *syncDataBuffer;

+ (void)initialize;

@end
