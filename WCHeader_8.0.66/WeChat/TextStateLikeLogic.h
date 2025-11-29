@class WCCgiBlockHelper, TextStateLikeData, NSMutableDictionary;
@protocol TextStateLikeLogicDelegate;

@interface TextStateLikeLogic : NSObject

@property (retain, nonatomic) WCCgiBlockHelper *cgiBlockHelper;
@property (retain, nonatomic) TextStateLikeData *cachedLikeData;
@property (nonatomic) BOOL useAffDB;
@property (retain, nonatomic) NSMutableDictionary *idToLikeTypeDictForAff;
@property (weak, nonatomic) id<TextStateLikeLogicDelegate> delegate;

+ (id)generateClientIdForTextState:(id)a0 isLike:(BOOL)a1;

- (id)init;
- (void)initData;
- (void)saveData;
- (void)performLikeForTextState:(id)a0 source:(unsigned int)a1;
- (void)performUnlikeForTextState:(id)a0 source:(unsigned int)a1;
- (BOOL)isLikeForTextStateWithId:(id)a0;
- (void)putLikeTypeCache:(id)a0 likeType:(long long)a1;
- (void)addLikeWithTextStateId:(id)a0 expireTime:(unsigned int)a1;
- (void)removeLikeWithTextStateId:(id)a0;
- (void)requestLikeForTextState:(id)a0 isDelete:(BOOL)a1 source:(unsigned int)a2 completion:(id /* block */)a3;
- (id)getCacheLikeData;
- (void).cxx_destruct;

@end
