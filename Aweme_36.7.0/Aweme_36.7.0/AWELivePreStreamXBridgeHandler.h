@class NSMutableArray;

@interface AWELivePreStreamXBridgeHandler : NSObject

@property (retain, nonatomic) NSMutableArray *subscribeList;

+ (id)sharedHandler;

- (void)registerSubscribes;
- (void)unregisterSubscribes;
- (void)registerPreviewShowClick;
- (void)registerPreviewInteractEnterRoom;
- (void).cxx_destruct;
- (id)init;

@end
