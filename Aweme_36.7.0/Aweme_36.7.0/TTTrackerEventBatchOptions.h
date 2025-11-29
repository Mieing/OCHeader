@class NSArray;

@interface TTTrackerEventBatchOptions : NSObject

@property (retain, nonatomic) NSArray *isolationKeys;
@property (nonatomic) long long batchType;
@property (nonatomic) long long batchLimit;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
