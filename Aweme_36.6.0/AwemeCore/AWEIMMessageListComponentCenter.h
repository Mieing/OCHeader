@class NSString, NSMutableArray, NSHashTable;
@protocol AWEIMMessageListComponent;

@interface AWEIMMessageListComponentCenter : NSObject <AWEIMMessageListComponentCenter>

@property (retain, nonatomic) NSMutableArray *components;
@property (retain, nonatomic) NSHashTable *weakChannelListeners;
@property (weak, nonatomic) id<AWEIMMessageListComponent> host;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addChannelListener:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addComponents:(id)a0;
- (void)addComponent:(id)a0;
- (void)forwardInvocation:(id)a0;

@end
