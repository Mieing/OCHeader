@class NSURLSession;

@interface MMNetCheck : NSObject

@property (retain, nonatomic) NSURLSession *session;

+ (id)shareInstance;

- (id)init;
- (void)startHttpCheckWithParam:(id)a0 url:(id)a1;
- (void)startHttpCheck:(id)a0;
- (void).cxx_destruct;

@end
