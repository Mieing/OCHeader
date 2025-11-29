@class NSString, NSMutableArray;
@protocol IESEZDanmakuQueueDelegate;

@interface IESEZDanmakuQueue : NSObject <IESEZDanmakuQueueProtocol>

@property (nonatomic) unsigned long long limit;
@property (retain, nonatomic) NSMutableArray *array;
@property (weak, nonatomic) id<IESEZDanmakuQueueDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeAllWithBlock:(id /* block */)a0;
- (void)queue:(id)a0;
- (void)removeOneWithBlock:(id /* block */)a0;
- (id)initWithLimitCount:(unsigned long long)a0;
- (void)remove:(id)a0;
- (void).cxx_destruct;
- (id)allObjects;
- (id)dequeue;
- (unsigned long long)count;
- (void)clean;

@end
