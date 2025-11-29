@class NSDateFormatter;

@interface AWESolariaNearLineDateFormatter : NSObject

@property (retain, nonatomic) NSDateFormatter *yyyyMMddFormatter;

+ (id)sharedFormatter;

- (id)dateStringFromTimestamp:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
