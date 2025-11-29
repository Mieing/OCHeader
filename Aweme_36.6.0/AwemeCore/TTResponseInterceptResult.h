@class NSMutableDictionary;

@interface TTResponseInterceptResult : NSObject

@property (copy, nonatomic) NSMutableDictionary *addHeaders;
@property (copy, nonatomic) NSMutableDictionary *removeHeaders;

- (void).cxx_destruct;
- (id)init;

@end
