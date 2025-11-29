@class NSString;

@interface AWENearbyCardLynxPrefetchResult : NSObject

@property (nonatomic) BOOL success;
@property (copy, nonatomic) NSString *errMsg;
@property (nonatomic) double startPrefetchTs;
@property (nonatomic) double endPrefetchTs;
@property (copy, nonatomic) NSString *schema;

- (void).cxx_destruct;

@end
