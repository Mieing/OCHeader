@class NSString;

@interface AWEGrouponTransformerPreloadResult : NSObject

@property (nonatomic) BOOL success;
@property (nonatomic) long long preloadType;
@property (copy, nonatomic) NSString *errMsg;
@property (nonatomic) double startPreloadTs;
@property (nonatomic) double endPreloadTs;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long scene;

- (void).cxx_destruct;

@end
