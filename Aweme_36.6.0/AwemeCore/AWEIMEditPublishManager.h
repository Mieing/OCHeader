@class NSMutableDictionary;

@interface AWEIMEditPublishManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *resultMap;
@property (retain, nonatomic) NSMutableDictionary *handlerMap;

+ (id)sharedInstance;

- (void)addResult:(id)a0 taskID:(id)a1;
- (void)removeResultWithRaskID:(id)a0;
- (void)requestPublishResultWithContext:(id)a0 completed:(id /* block */)a1;
- (void).cxx_destruct;

@end
