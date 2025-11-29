@class NSMutableArray;

@interface AWEFeedDoubleColumnRequestDuration : NSObject {
    NSMutableArray *_records;
}

@property (nonatomic) long long capacity;
@property (readonly, nonatomic) double average;

- (void).cxx_destruct;
- (id)init;
- (void)append:(double)a0;

@end
