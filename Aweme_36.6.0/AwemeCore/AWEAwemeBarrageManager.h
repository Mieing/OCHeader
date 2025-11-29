@class NSString, NSMutableDictionary;

@interface AWEAwemeBarrageManager : NSObject <AWEAwemeBarrageManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *taskDict;
@property (retain, nonatomic) NSMutableDictionary *deletedCommentDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)addNoti;
- (void)deleteCommentWithNotification:(id)a0;
- (void)p_initBarrageListWithModel:(id)a0;
- (void)removeDeletedCommentArrayInAweme:(id)a0;
- (void)requestBarrageListWithAweme:(id)a0 commentCount:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)removeAwemeBarrageWithModel:(id)a0 atIndexSet:(id)a1;
- (void)recordDeletedComments:(id)a0 inAweme:(id)a1;
- (void)resetAwemeBarrageListRequest:(id)a0;
- (void)fetchAwemeBarrageListWithModel:(id)a0 preprocessBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)insertAwemeBarrageWithModel:(id)a0 barrageModel:(id)a1 atIndex:(long long)a2;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
