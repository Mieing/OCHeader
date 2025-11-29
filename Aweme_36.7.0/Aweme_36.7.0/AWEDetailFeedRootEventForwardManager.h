@class AWEArchContainer;

@interface AWEDetailFeedRootEventForwardManager : NSObject

@property (weak, nonatomic) AWEArchContainer *container;

- (void)setupEventForwarding;
- (void)forwardEventFromID:(id)a0 toDataID:(id)a1 withHandler:(id /* block */)a2;
- (void)forwardEventFromID:(id)a0 toDataID:(id)a1;
- (void).cxx_destruct;
- (id)initWithContainer:(id)a0;

@end
