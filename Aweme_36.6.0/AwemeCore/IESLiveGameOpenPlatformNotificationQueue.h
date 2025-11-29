@class NSString, NSMutableArray;

@interface IESLiveGameOpenPlatformNotificationQueue : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *notes;

- (BOOL)isNotificationExpired:(id)a0;
- (void)enqueue:(id)a0;
- (void).cxx_destruct;
- (void)removeAll;
- (id)initWithName:(id)a0;
- (id)dequeue;
- (id)firstElement;
- (long long)count;

@end
