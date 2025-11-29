@class NSMutableSet, NSMutableDictionary;

@interface AWEHotSearchCommentNewHelper : NSObject

@property (class, readonly, nonatomic) NSMutableSet *hotSpotHasInsertSet;
@property (class, readonly, nonatomic) NSMutableDictionary *userIdentities;

+ (long long)indexToOuterTabType:(long long)a0;
+ (id)getDiscussPVDesc:(id)a0;
+ (void)clearUserIdentities;
+ (long long)outerTabTypeToIndex:(long long)a0;
+ (void)transferToHotSearchFusionPage:(id)a0 extraParams:(id)a1;
+ (id)hotListInfoWith:(id)a0;
+ (id)allAvatarsURLModelWithCommentCardList:(id)a0;
+ (void)preLoadLatestCommentWithContext:(id)a0 completion:(id /* block */)a1;
+ (long long)feedTabTypeToIndex:(long long)a0;
+ (long long)indexToFeedTabType:(long long)a0;
+ (id)selectHighQualityComment:(id)a0;
+ (id)addInsertInfo:(id)a0;
+ (id)selectMostDiggComment:(id)a0;
+ (id)splitString:(id)a0 targetWidth:(double)a1 maxLines:(long long)a2 font:(id)a3;

@end
