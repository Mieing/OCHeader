@class NSMutableDictionary, NSMutableArray;

@interface EmoticonStoreSession : MMObject

@property (retain, nonatomic) NSMutableDictionary *m_itemList;
@property (retain, nonatomic) NSMutableArray *m_downloadingItemList;

- (id)init;
- (id)findItemByProductID:(id)a0;
- (id)addItem:(id)a0 ForProductID:(id)a1;
- (id)megerFromArray:(id)a0;
- (id)megerFromArray:(id)a0 IsForceUpdateTagAndIntroduce:(BOOL)a1;
- (void).cxx_destruct;

@end
