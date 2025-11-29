@class NSString;

@interface AWELiveCachePoolBusinessUseInfo : NSObject

@property (nonatomic) long long scene;
@property (nonatomic) long long requestCount;
@property (nonatomic) long long returnCount;
@property (nonatomic) long long replaceCount;
@property (nonatomic) float duration;
@property (nonatomic) long long code;
@property (copy, nonatomic) NSString *errorDescription;

- (void).cxx_destruct;

@end
