@class NSMutableArray;

@interface AWEDPUndertakeEventListenerModel : NSObject

@property (retain, nonatomic) NSMutableArray *events;
@property (copy, nonatomic) id /* block */ checkBlock;
@property (copy, nonatomic) id /* block */ handlerBlock;

- (void).cxx_destruct;
- (id)init;

@end
