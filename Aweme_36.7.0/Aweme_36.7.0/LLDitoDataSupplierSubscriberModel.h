@class NSString, NSMutableArray;

@interface LLDitoDataSupplierSubscriberModel : NSObject

@property (copy, nonatomic) NSString *subscriberKey;
@property (weak, nonatomic) id target;
@property (retain, nonatomic) NSMutableArray *handlersArray;

- (void)addSubscribeHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
