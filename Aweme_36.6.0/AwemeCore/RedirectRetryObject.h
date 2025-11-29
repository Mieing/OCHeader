@class NSString, TTHttpResponse, NSObject;
@protocol OS_dispatch_queue;

@interface RedirectRetryObject : NSObject <NSCopying>

@property (copy, nonatomic) id /* block */ redirectCallback;
@property (copy, nonatomic) NSString *location;
@property (retain, nonatomic) TTHttpResponse *oldRepsonse;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) BOOL canDirectlyDispatch;

- (id)initWithRedirectCallback:(id /* block */)a0 newLocation:(id)a1 oldRepsonse:(id)a2 dispatchQueue:(id)a3 canDirectlyDispatch:(BOOL)a4;
- (void)handleRedirectCallback;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
