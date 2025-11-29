@class NSMutableArray;

@interface IESDPBQueue : NSObject

@property (retain, nonatomic) NSMutableArray *array;
@property (nonatomic) long long headIndex;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) BOOL empty;
@property (readonly, nonatomic) id peekHead;

- (void)enqueue:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)dequeue;

@end
