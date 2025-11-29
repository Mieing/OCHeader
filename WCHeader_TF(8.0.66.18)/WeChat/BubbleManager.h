@class NSMutableDictionary, NSRecursiveLock;

@interface BubbleManager : NSObject {
    NSRecursiveLock *m_lock;
    NSMutableDictionary *m_bubbleInfoDict;
}

+ (id)sharedInstance;

- (id)init;
- (id)bubbleInfoWithType:(unsigned long long)a0 position:(unsigned long long)a1 isSender:(BOOL)a2;
- (void).cxx_destruct;

@end
