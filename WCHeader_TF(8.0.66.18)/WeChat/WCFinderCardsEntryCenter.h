@class WCFinderCardsEntryCenterStoreInfo, FinderJumpInfo;

@interface WCFinderCardsEntryCenter : NSObject

@property (retain, nonatomic) WCFinderCardsEntryCenterStoreInfo *data;
@property (readonly, nonatomic) BOOL shouldShow;
@property (readonly, nonatomic) BOOL needPreload;
@property (readonly, nonatomic) BOOL isToNewCards;
@property (readonly, nonatomic) FinderJumpInfo *jumpInfo;

- (id)init;
- (void)updateWithCardHolderEntranceInfo:(id)a0;
- (id)getFinderCardHolderEntranceInfo;
- (void).cxx_destruct;

@end
