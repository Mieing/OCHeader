@class NSMutableSet, NSMutableDictionary;

@interface AWECommentViewedCommentsManager : NSObject

@property (retain, nonatomic) NSMutableSet *viewedFirstCommentIDsForScene;
@property (retain, nonatomic) NSMutableSet *viewedSecondCommentIDsForScene;
@property (retain, nonatomic) NSMutableDictionary *viewedFirstCommentIDs;
@property (retain, nonatomic) NSMutableDictionary *viewedSecondCommentIDs;

+ (id)enumToString:(long long)a0;

- (id)generateViewedCommentCountParamsWithTargetSet:(long long)a0;
- (void)insertViewedFirstCommentIDs:(id)a0 atTarget:(long long)a1;
- (id)commentCategoryWithComment:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
