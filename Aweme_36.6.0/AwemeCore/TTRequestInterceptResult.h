@class NSString, NSMutableDictionary;

@interface TTRequestInterceptResult : NSObject

@property (copy, nonatomic) NSString *modifiedUrl;
@property (copy, nonatomic) NSMutableDictionary *addHeaders;
@property (copy, nonatomic) NSMutableDictionary *removeHeaders;

- (void).cxx_destruct;
- (id)init;

@end
