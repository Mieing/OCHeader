@interface AffRoamTransferStats : WXPBGeneratedMessage

@property (nonatomic) unsigned long long totalSize;
@property (nonatomic) unsigned long long transferredSize;
@property (nonatomic) unsigned long long elapsedTime;
@property (nonatomic) unsigned long long speed;
@property (nonatomic) unsigned long long avgSpeed;
@property (nonatomic) unsigned long long remainingTime;

+ (void)initialize;

@end
