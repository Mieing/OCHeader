@class NSString, NSMutableDictionary;

@interface TextStateLikeData : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableDictionary *idToTypeDict;
@property (retain, nonatomic) NSMutableDictionary *idToExpireTimeDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_idToTypeDict;
+ (void)PBArrayAdd_idToExpireTimeDict;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void)setLikeType:(long long)a0 forTextStateWithId:(id)a1 expireTime:(unsigned int)a2;
- (void)removeLikeForTextStateId:(id)a0;
- (void)batchRemoveExpiredLike;
- (void).cxx_destruct;

@end
