@class NSDictionary;

@interface BDPNovelStorageStatistics : NSObject

@property (nonatomic) double optStartTime;
@property (nonatomic) double optEndTime;
@property (nonatomic) double lruEndTime;
@property (nonatomic) double intStartTime;
@property (nonatomic) double intEndTime;
@property (retain, nonatomic) NSDictionary *data;
@property (nonatomic) long long totalSize;

- (void).cxx_destruct;

@end
