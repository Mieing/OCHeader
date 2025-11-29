@interface AffRoamDiskInfo : WXPBGeneratedMessage

@property (nonatomic) int roamDiskType;
@property (nonatomic) unsigned long long usedSize;
@property (nonatomic) unsigned long long availableSize;
@property (nonatomic) unsigned long long totalSize;
@property (nonatomic) BOOL supportStreamTransport;

+ (void)initialize;

@end
