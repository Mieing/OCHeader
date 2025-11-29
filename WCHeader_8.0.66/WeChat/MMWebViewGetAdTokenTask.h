@class NSString;

@interface MMWebViewGetAdTokenTask : NSObject

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *adUrl;
@property (copy, nonatomic) NSString *posId;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
