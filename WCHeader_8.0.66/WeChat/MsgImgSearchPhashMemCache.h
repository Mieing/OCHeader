@class NSMutableSet, NSMutableDictionary;

@interface MsgImgSearchPhashMemCache : MMObject

@property (retain, nonatomic) NSMutableSet *isGetingPhashStrSet;
@property (retain, nonatomic) NSMutableDictionary *localID2MemItemMap;

- (id)init;
- (BOOL)isInGettingSet:(id)a0;
- (void)addToGettingSet:(id)a0;
- (void)removeFromGettingSet:(id)a0;
- (void)setMemItem:(id)a0 localID:(unsigned long long)a1;
- (id)getMemItemForLocalID:(unsigned long long)a0;
- (id)getPhashStrForLocalID:(unsigned long long)a0;
- (void).cxx_destruct;

@end
