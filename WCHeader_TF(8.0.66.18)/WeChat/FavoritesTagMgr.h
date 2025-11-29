@class NSRecursiveLock, NSString, NSArray, NSMutableDictionary, MyFavoritesDB, NSMutableArray;
@protocol FavoritesTagMgrDelegate;

@interface FavoritesTagMgr : MMObject <PBMessageObserverDelegate> {
    NSMutableArray *m_editingLocalIds;
    NSString *m_editingTag;
    NSString *m_newTag;
    id /* block */ m_tagEditHandler;
    unsigned int m_editingTagId;
    NSMutableArray *m_editingItemArr;
    NSArray *m_editingTagArr;
    NSMutableArray *m_bindTagRequestArr;
    NSMutableDictionary *m_editingItemDic;
    BOOL m_editContainFail;
    MyFavoritesDB *_favDB;
    NSRecursiveLock *m_lock;
    NSMutableDictionary *m_tag2TagIdDic;
    NSMutableDictionary *m_tagId2TagDic;
    NSMutableDictionary *m_tagItemDic;
    NSMutableDictionary *m_dbTagId2TagDic;
}

@property (weak, nonatomic) id<FavoritesTagMgrDelegate> m_delegate;

- (void)initDB:(id)a0;
- (id)getAllTags;
- (void)loadAllFavFags;
- (unsigned int)getTagId:(id)a0;
- (id)getTagsFromIdList:(id)a0;
- (id)getValidTagsFromIdList:(id)a0;
- (BOOL)saveAllTags;
- (BOOL)processTagsFromServer:(id)a0;
- (void)getAllTagsFromServer;
- (void)HandleGetAllTagsResp:(id)a0 Event:(unsigned int)a1;
- (void)newUpdateItems:(id)a0 tags:(id)a1 mode:(unsigned long long)a2 withCompletion:(id /* block */)a3;
- (void)processBatchBindTag;
- (void)HandleBatchBindTagResp:(id)a0 Event:(unsigned int)a1;
- (void)updateItems:(id)a0 tags:(id)a1 withCompletion:(id /* block */)a2;
- (void)updateTagForItem:(id)a0;
- (void)HandleModifyFavItemResp:(id)a0 Event:(unsigned int)a1;
- (void)newUpdateTag:(id)a0 to:(id)a1 withCompletion:(id /* block */)a2;
- (void)renameTagNameFrom:(id)a0 withId:(unsigned int)a1 to:(id)a2;
- (void)HandleRenameTagResp:(id)a0 Event:(unsigned int)a1;
- (void)deleteTagWithId:(unsigned int)a0;
- (void)HandleDeleteTagResp:(id)a0 Event:(unsigned int)a1;
- (void)updateTag:(id)a0 to:(id)a1 withCompletion:(id /* block */)a2;
- (void)startBatchUpdateTag;
- (void)updateTagInFavItem:(id)a0;
- (void)HandleBatchModifyFavItemResp:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
