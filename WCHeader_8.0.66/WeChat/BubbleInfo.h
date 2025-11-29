@class NSString, NSMutableDictionary, NSRecursiveLock;

@interface BubbleInfo : NSObject <NSCopying> {
    NSRecursiveLock *m_lock;
    NSMutableDictionary *m_bubbleCaches;
}

@property (retain, nonatomic) NSString *bubbleName;
@property (retain, nonatomic) NSString *bubbleNameHL;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long position;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } margin;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)getBubbleImage:(BOOL)a0 isDarkMode:(BOOL)a1;
- (id)getBubbleImage:(BOOL)a0;
- (id)getBubbleImage:(BOOL)a0 isDarkMode:(BOOL)a1 useCache:(BOOL)a2;
- (id)getNewBubbleImage:(BOOL)a0;
- (void).cxx_destruct;

@end
