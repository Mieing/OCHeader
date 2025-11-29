@interface RoamTransferStats : WXPBGeneratedMessage

@property (nonatomic) unsigned long long totalSize;
@property (nonatomic) unsigned long long transferredDataSize;
@property (nonatomic) unsigned long long elapsedTime;
@property (nonatomic) unsigned long long speed;

+ (void)initialize;

@end
