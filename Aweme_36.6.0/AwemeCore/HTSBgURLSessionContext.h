@class NSString;

@interface HTSBgURLSessionContext : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;

@end
