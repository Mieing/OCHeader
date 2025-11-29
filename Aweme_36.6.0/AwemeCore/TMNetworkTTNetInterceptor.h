@class TTResponseMutableDataFilterObject, TTRequestFilterObject;

@interface TMNetworkTTNetInterceptor : NSObject

@property (retain, nonatomic) TTRequestFilterObject *requestFilter;
@property (retain, nonatomic) TTResponseMutableDataFilterObject *responseFilter;

+ (id)sharedInstance;

- (void)startIntercepting;
- (void)stopIntercepting;
- (void).cxx_destruct;

@end
