@class NSString;

@interface AWEAdRelatedSearchService : HTSService <AWEAdRelatedSearchService>

@property (nonatomic) long long AWEAdRelatedSearchState;
@property (nonatomic) BOOL hasRequestAfterSee;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchRelatedSearchWithModelAfterSee:(id)a0;
- (void)fetchRelatedSearchWithModel:(id)a0;
- (id)getSuggestWordsFromRawAdData:(id)a0;
- (void)resetRelatedSearchType;
- (BOOL)isSoftAdWithAweme:(id)a0;
- (BOOL)pushAfterSeeWithoutAnimWithModel:(id)a0;
- (BOOL)isValidBottomBarResponse:(id)a0;
- (void)fetchRelatedSearchWithModel:(id)a0 WithBlock:(id /* block */)a1;
- (id)getCommentSearchWordSource:(id)a0;
- (void)fetchRelatedSearchWithModelByEvent:(id)a0;
- (void)showBottomBarWithExistWordModel:(id)a0 withAweme:(id)a1 withType:(long long)a2;
- (id)configRequestParamsWithModel:(id)a0;
- (BOOL)isValidCommentResponse:(id)a0 withAwemeModel:(id)a1;
- (BOOL)isNewReq:(id)a0;
- (void)showBottomBarWithAsynRequest:(id)a0 withAweme:(id)a1 withBusinessID:(id)a2 withType:(long long)a3;
- (void)refreshCommentHeader:(id)a0 withAwemeModel:(id)a1 WithBlock:(id /* block */)a2;
- (id)anchorExtraTitleWithAweme:(id)a0;
- (id)anchorLogExtraAnchorTitleWithAweme:(id)a0;
- (id)init;
- (void)dealloc;

@end
