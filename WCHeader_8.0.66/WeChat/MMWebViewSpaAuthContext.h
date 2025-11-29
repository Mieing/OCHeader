@class NSString;

@interface MMWebViewSpaAuthContext : NSObject

@property (retain, nonatomic) NSString *callBackId;
@property (retain, nonatomic) NSString *reqUrl;
@property (copy, nonatomic) id /* block */ authBlock;

- (void)dealloc;
- (void).cxx_destruct;

@end
