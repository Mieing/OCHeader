@class NSMutableArray, FavoritesItem;
@protocol FavoritesUploadProccessorDelegate;

@interface FavoritesUploadBaseProccessor : MMObject {
    NSMutableArray *m_proccessingQueue;
    BOOL m_bProccessing;
    FavoritesItem *m_priorItem;
    FavoritesItem *m_proccessingItem;
}

@property (weak, nonatomic) FavoritesUploadBaseProccessor *nextProccessor;
@property (weak, nonatomic) id<FavoritesUploadProccessorDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void)triggerProccess;
- (void)tryProccess;
- (id)getAllItem;
- (void)dealloc;
- (void)addItem:(id)a0 isPrior:(BOOL)a1;
- (void)removeItem:(id)a0;
- (void)updateTagForItem:(id)a0;
- (BOOL)isProccessingWithLocalId:(unsigned int)a0;
- (BOOL)checkFavItemOccupiedByFavId:(unsigned int)a0;
- (void)removeAllItems;
- (BOOL)containsFavItem:(id)a0;
- (void).cxx_destruct;

@end
