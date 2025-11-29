@interface WAMemoryStatusSnapShot : NSObject

@property (nonatomic) long long totalPhysicalMemorySizeInBytes;
@property (nonatomic) long long roundedTotalPhysicalMemorySizeInBytes;
@property (nonatomic) long long footPrintMemorySizeInBytes;
@property (nonatomic) long long residentMemorySizeInBytes;
@property (nonatomic) long long freeMemorySizeInBytes;
@property (nonatomic) double footPrintPercent;
@property (nonatomic) double freePercent;

@end
