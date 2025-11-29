@class NSString, NSMutableArray, NSMutableDictionary;

@interface AWEHPUIDispatchQueue : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL isReady;
@property (retain, nonatomic) NSMutableArray *allHandlers;
@property (retain, nonatomic) NSMutableDictionary *handlerMaps;

+ (id)queueWithEventName:(id)a0;

- (void)addHandler:(id /* block */)a0 withIdentifier:(id)a1;
- (void)fireAllHandlers;
- (void).cxx_destruct;
- (void)addHandler:(id /* block */)a0;

@end
