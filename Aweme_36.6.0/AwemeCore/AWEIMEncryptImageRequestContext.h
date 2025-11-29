@class NSString;

@interface AWEIMEncryptImageRequestContext : NSObject

@property (copy) NSString *url;
@property (copy) NSString *uri;
@property (copy) NSString *skey;
@property (copy) NSString *scene;
@property (nonatomic) int priority;

- (BOOL)checkProperty;
- (void).cxx_destruct;

@end
