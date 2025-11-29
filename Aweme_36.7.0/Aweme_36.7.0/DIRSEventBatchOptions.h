@class NSArray;

@interface DIRSEventBatchOptions : NSObject <NSCopying>

@property (nonatomic) long long priority;
@property (retain, nonatomic) NSArray *eventIDs;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSArray *allowRegionList;
@property (nonatomic) long long minDBIndex;
@property (nonatomic) long long maxDBIndex;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
