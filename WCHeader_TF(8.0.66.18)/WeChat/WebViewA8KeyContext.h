@interface WebViewA8KeyContext : NSObject

@property (nonatomic) int reason;
@property (nonatomic) BOOL notGoToUrlOnGetA8Key;
@property (nonatomic) BOOL exceptionBackOnGetA8Key;
@property (copy, nonatomic) id /* block */ onGetBlock;

- (void).cxx_destruct;

@end
