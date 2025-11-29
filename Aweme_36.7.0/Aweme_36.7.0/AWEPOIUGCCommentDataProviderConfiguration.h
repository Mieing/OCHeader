@class NSString;

@interface AWEPOIUGCCommentDataProviderConfiguration : NSObject

@property (copy, nonatomic) NSString *containerID;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasPrevious;
@property (copy, nonatomic) NSString *requestRawParams;
@property (nonatomic) long long preloadStep;

- (void).cxx_destruct;

@end
