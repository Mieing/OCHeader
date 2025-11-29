@class NSString;

@interface AWEPadChannelTracker : NSObject

@property (nonatomic) long long tabType;
@property (copy, nonatomic) NSString *enterFrom;

- (id)actionNameForAction:(long long)a0;
- (id)tabNameForType:(long long)a0;
- (id)initWithTabType:(long long)a0 enterFrom:(id)a1;
- (void)trackDidRenderWithMonitor:(id)a0;
- (void).cxx_destruct;

@end
