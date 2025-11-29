@class NSString, ItemShareListResponse_ItemInfo;

@interface IESLiveItemShareItemCellViewModel : NSObject

@property (retain, nonatomic) ItemShareListResponse_ItemInfo *itemInfo;
@property (copy, nonatomic) NSString *itemType;
@property (nonatomic) BOOL firstItem;
@property (nonatomic) BOOL lastItem;
@property (nonatomic) BOOL hasTrackShow;

- (void).cxx_destruct;

@end
