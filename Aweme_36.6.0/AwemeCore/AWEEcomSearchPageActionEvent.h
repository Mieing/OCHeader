@class NSDictionary;

@interface AWEEcomSearchPageActionEvent : NSObject

@property (nonatomic) double startTime;
@property (copy, nonatomic) NSDictionary *commonParameters;
@property (nonatomic) unsigned long long pageState;
@property (nonatomic) BOOL hasAction;
@property (nonatomic) long long reSearchCount;

- (void)endWithCardIndexVisibleMax:(long long)a0 cardCountVisible:(long long)a1;
- (void).cxx_destruct;
- (void)start;

@end
