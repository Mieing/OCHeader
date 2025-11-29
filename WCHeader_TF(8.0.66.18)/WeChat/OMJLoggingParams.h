@protocol OMJLoggingProvider;

@interface OMJLoggingParams : NSObject

@property (readonly, nonatomic) id<OMJLoggingProvider> loggingProvider;
@property (readonly, nonatomic) long long maxLogLevel;

- (id)initWithLoggingProvider:(id)a0;
- (id)initWithLoggingProvider:(id)a0 maxLogLevel:(long long)a1;
- (void).cxx_destruct;

@end
