@class NSString, NSNumber;

@interface AMapNetHostStatic : NSObject

@property (retain, nonatomic) NSString *host;
@property (retain, nonatomic) NSNumber *requestCount;
@property (retain, nonatomic) NSNumber *faileCount;

- (void).cxx_destruct;

@end
