@class NSMutableDictionary;
@protocol FavoritesPinTopMgrDelegate;

@interface FavoritesPinTopMgr : MMObject <PBMessageObserverDelegate>

@property (retain, nonatomic) NSMutableDictionary *oldTimestampMap;
@property (retain, nonatomic) NSMutableDictionary *favIdToEventMap;
@property (weak, nonatomic) id<FavoritesPinTopMgrDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)pinTopFavoritesItem:(id)a0;
- (void)cancelPinTopFavoritesItem:(id)a0;
- (void)sendPinTopRequest:(id)a0 isCancel:(BOOL)a1;
- (void)handlePinTopFavResponse:(id)a0 Event:(unsigned int)a1;
- (void)handleRequestFail:(id)a0 errorCode:(int)a1 eventID:(unsigned int)a2;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
