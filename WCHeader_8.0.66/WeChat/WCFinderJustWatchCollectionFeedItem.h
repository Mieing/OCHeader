@class WCFinderDataItem;

@interface WCFinderJustWatchCollectionFeedItem : NSObject

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (nonatomic) BOOL videoCompleted;

- (id)initWithDataItem:(id)a0 videoCompleted:(BOOL)a1;
- (id)collectionInfo;
- (void).cxx_destruct;

@end
