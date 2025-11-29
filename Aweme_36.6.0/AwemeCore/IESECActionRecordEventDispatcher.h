@class NSMutableArray;

@interface IESECActionRecordEventDispatcher : NSObject

@property (retain, nonatomic) NSMutableArray *interceptors;
@property (retain, nonatomic) NSMutableArray *consumers;

- (id)consumerWhiteList;
- (void)dispatchEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)registerConsumer:(id)a0;

@end
