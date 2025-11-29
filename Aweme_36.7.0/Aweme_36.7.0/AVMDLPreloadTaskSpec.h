@class NSString;

@interface AVMDLPreloadTaskSpec : AVMDLTaskSpec

@property (nonatomic) long long priorityLevel;
@property (nonatomic) unsigned long long preloadOffset;
@property (nonatomic) unsigned long long preloadSize;
@property (nonatomic) unsigned long long headerSize;
@property (nonatomic) unsigned long long preloadTimestamp;
@property (nonatomic) unsigned long long preloadDurationMilliSecond;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *subtag;
@property (copy, nonatomic) NSString *groupId;

- (void).cxx_destruct;
- (id)init;

@end
