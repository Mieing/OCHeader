@class NSString;

@interface WCFinderGetDetailCacheData : NSObject

@property (copy, nonatomic) NSString *tid;
@property (nonatomic) BOOL getDetailResult;
@property (copy, nonatomic) NSString *invalideMsg;
@property (nonatomic) double getDetailTime;

- (void).cxx_destruct;

@end
