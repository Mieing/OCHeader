@class NSString;

@interface TTDispatchResult : NSObject

@property (copy, nonatomic) NSString *originUrl;
@property (copy, nonatomic) NSString *finalUrl;
@property (copy, nonatomic) NSString *etag;
@property (copy, nonatomic) NSString *epoch;
@property (copy, nonatomic) NSString *ttnetOriginHost;
@property (nonatomic) unsigned long long dispatchState;

- (id)initWithUrl:(id)a0 dispatchState:(unsigned long long)a1;
- (id)initWithUrl:(id)a0 finalUrl:(id)a1 etag:(id)a2 epoch:(id)a3 ttnetOriginHost:(id)a4 dispatchState:(unsigned long long)a5;
- (void).cxx_destruct;

@end
