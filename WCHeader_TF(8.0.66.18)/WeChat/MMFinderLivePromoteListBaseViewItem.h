@class FinderLiveShopWindowAdItem, FinderPaidCollectionInfo, FinderJumpInfo, FinderLivePromoteInfoRedPacketCover, FinderLiveListenPromoteInfo;

@interface MMFinderLivePromoteListBaseViewItem : NSObject

@property (retain, nonatomic) FinderLiveShopWindowAdItem *adItem;
@property (retain, nonatomic) FinderJumpInfo *jumpInfo;
@property (retain, nonatomic) FinderLivePromoteInfoRedPacketCover *redPacketCover;
@property (retain, nonatomic) FinderLiveListenPromoteInfo *listenPromoteInfo;
@property (retain, nonatomic) FinderPaidCollectionInfo *paidCollectionInfo;
@property (nonatomic) unsigned int type;
@property (nonatomic) BOOL isContainItem;

- (void).cxx_destruct;

@end
