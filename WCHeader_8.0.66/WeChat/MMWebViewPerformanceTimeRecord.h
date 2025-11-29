@class NSString;

@interface MMWebViewPerformanceTimeRecord : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long timeInMs;
@property (nonatomic) unsigned long long sequence;
@property (nonatomic) BOOL isNewCategory;
@property (copy, nonatomic) NSString *detail;
@property (nonatomic) unsigned long long relativeTimeInMs;

- (id)descriptionWithStartTime:(unsigned long long)a0;
- (long long)timeCompare:(id)a0;
- (void).cxx_destruct;

@end
