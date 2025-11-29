@class NSMutableArray;

@interface PriorityArray : NSObject {
    NSMutableArray *_queue;
}

- (id)init;
- (id)top;
- (void)add:(id)a0 withPriority:(long long)a1;
- (BOOL)remove:(id)a0;
- (BOOL)contains:(id)a0;
- (void).cxx_destruct;

@end
