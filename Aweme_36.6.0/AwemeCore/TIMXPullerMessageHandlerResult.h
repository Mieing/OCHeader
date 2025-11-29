@class TIMXElapsedTimeLogger;

@interface TIMXPullerMessageHandlerResult : NSObject

@property (nonatomic) BOOL result;
@property (nonatomic) long long count;
@property (retain, nonatomic) TIMXElapsedTimeLogger *logger;

- (void).cxx_destruct;

@end
