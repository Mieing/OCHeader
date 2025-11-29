@class NSString;
@protocol TTVideoEngineLocalServerToEngineProtocol;

@interface _TTVideoEngineLocalServerObserver : NSObject <TTVideoEnginePreloadQueueItem>

@property (weak, nonatomic) id<TTVideoEngineLocalServerToEngineProtocol> target;
@property (copy, nonatomic) NSString *key;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)itemKey;

@end
