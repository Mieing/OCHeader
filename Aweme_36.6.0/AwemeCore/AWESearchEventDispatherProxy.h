@class Protocol, NSArray, NSHashTable;

@interface AWESearchEventDispatherProxy : NSObject

@property (retain, nonatomic) NSHashTable *broadcasters;
@property (retain, nonatomic) NSHashTable *receivers;
@property (retain, nonatomic) Protocol *protocol;
@property (readonly, copy, nonatomic) NSArray *broadcastList;
@property (readonly, copy, nonatomic) NSArray *receiveList;

+ (BOOL)fixReturnValue;

- (void)addBroadcaster:(id)a0;
- (void)removeBroadcaster:(id)a0;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void)addReceiver:(id)a0;
- (void)removeReceiver:(id)a0;

@end
