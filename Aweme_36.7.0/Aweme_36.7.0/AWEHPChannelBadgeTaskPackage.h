@class AWEHPChannelBadgeTask;
@protocol AWEPzComponentProtocol;

@interface AWEHPChannelBadgeTaskPackage : NSObject

@property (retain, nonatomic) id<AWEPzComponentProtocol> component;
@property (weak, nonatomic) AWEHPChannelBadgeTask *weakTask;

- (void).cxx_destruct;

@end
