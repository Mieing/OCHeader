@class NSDictionary;

@interface AWEFeedRequestConfigModel : NSObject

@property (nonatomic) BOOL forceRequest;
@property (copy, nonatomic) NSDictionary *requestExtParams;
@property (copy, nonatomic) NSDictionary *requestArgs;

+ (id)configWithParams:(id)a0;
+ (id)configWithForceRequest:(BOOL)a0;

- (void).cxx_destruct;

@end
