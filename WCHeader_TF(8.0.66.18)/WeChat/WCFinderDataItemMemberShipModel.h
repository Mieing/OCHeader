@class WCFinderDataItem;

@interface WCFinderDataItemMemberShipModel : NSObject

@property (retain, nonatomic) WCFinderDataItem *dataItem;

+ (id)modelWithDataItem:(id)a0;

- (BOOL)isMemberShipFeed;
- (BOOL)isFeedCanPlay;
- (void).cxx_destruct;

@end
