@class NSString, NSMutableSet, AWESearchDiscussViewController, AWEPageContext;

@interface AWESearchDiscussDynamicInsertController : NSObject <AWESearchCachalotControllerBizDelegate>

@property (retain, nonatomic) NSMutableSet *queries;
@property (retain, nonatomic) NSMutableSet *insertedQueries;
@property (nonatomic) BOOL queryNewKeyword;
@property (copy, nonatomic) NSString *currentTab;
@property (copy, nonatomic) NSString *currentQuery;
@property (nonatomic) BOOL userDidScroll;
@property (weak, nonatomic) AWESearchDiscussViewController *container;
@property (retain, nonatomic) AWEPageContext *pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)buildInsertModelWith:(id)a0;
- (void)cachalotFeedDidScroll:(id)a0;
- (BOOL)couldDynamicInsert;
- (void)prepareDynamicInsertWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addObservers;

@end
