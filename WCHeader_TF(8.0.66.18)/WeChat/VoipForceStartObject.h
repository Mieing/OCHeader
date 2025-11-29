@class NSRecursiveLock;

@interface VoipForceStartObject : NSObject

@property (copy, nonatomic) id /* block */ m_block;
@property (retain, nonatomic) NSRecursiveLock *m_lock;
@property (nonatomic) BOOL m_hasStart;
@property (nonatomic) BOOL canStartInUnactive;

- (id)init;
- (void)updateBlock:(id /* block */)a0;
- (void)dealloc;
- (BOOL)start;
- (void)whenDidActive;
- (void)internalStart;
- (void).cxx_destruct;

@end
