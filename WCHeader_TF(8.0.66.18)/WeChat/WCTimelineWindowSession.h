@class NSMutableDictionary, NSMutableSet;

@interface WCTimelineWindowSession : NSObject

@property (retain, nonatomic) NSMutableDictionary *postingItemIDs;
@property (retain, nonatomic) NSMutableSet *postedItemIDs;
@property (retain, nonatomic) NSMutableDictionary *postedItemToLocalItem;
@property (nonatomic) BOOL isEnable;

- (id)init;
- (BOOL)isDataItemPostedInSession:(id)a0;
- (void)addPostingItem:(id)a0 withPostInfo:(id)a1;
- (id)findPostInfo:(id)a0;
- (void)replacePostedItem:(id)a0 withNewItem:(id)a1;
- (void)removePostedItem:(id)a0;
- (void)closeSession;
- (void).cxx_destruct;

@end
