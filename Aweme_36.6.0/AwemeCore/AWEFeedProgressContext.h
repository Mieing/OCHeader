@class NSString;
@protocol AWEFeedProgressTrackerProtocol;

@interface AWEFeedProgressContext : AWEPageContext

@property (copy, nonatomic) NSString *referString;
@property (weak, nonatomic) id<AWEFeedProgressTrackerProtocol> tracker;

- (void).cxx_destruct;
- (void)reset;

@end
