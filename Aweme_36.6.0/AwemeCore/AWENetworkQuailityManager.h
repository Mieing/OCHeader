@class AWENetworkQuailtyModel;
@protocol AWENetworkQuailityDelegate;

@interface AWENetworkQuailityManager : NSObject

@property (readonly, nonatomic) AWENetworkQuailtyModel *currentNqeStatues;
@property (weak, nonatomic) id<AWENetworkQuailityDelegate> delegate;

- (void)startNotify;
- (void)endNotify;
- (void).cxx_destruct;

@end
