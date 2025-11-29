@class NSMutableArray;

@interface LSIMBulletContainerReuseList : NSObject

@property (retain, nonatomic) NSMutableArray *bulletContainerList;
@property (nonatomic) unsigned long long limitCount;

- (void)addBulletContainer:(id)a0;
- (id)aBulletContainerPreferContext:(id)a0;
- (BOOL)containsBulletContainerPreferContext:(id)a0;
- (BOOL)isFullList;
- (BOOL)p_isOnMainThread;
- (void)p_removeFirstObject;
- (id)initWithLimitCount:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)itemCount;

@end
