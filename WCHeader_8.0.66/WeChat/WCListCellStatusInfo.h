@class WCDataItem, WCCellGroup, WCCellGroupItem;

@interface WCListCellStatusInfo : NSObject

@property (readonly, nonatomic) WCDataItem *dataItem;
@property (readonly, nonatomic) WCCellGroup *group;
@property (readonly, nonatomic) WCCellGroupItem *groupItem;
@property (readonly, nonatomic) BOOL showsPrivateStatus;
@property (readonly, nonatomic) BOOL showsGroupedStatus;
@property (readonly, nonatomic) BOOL showsStarredStatus;
@property (readonly, nonatomic) BOOL showsFailureStatus;
@property (readonly, nonatomic) BOOL showsLivePhotoStatus;

+ (id)statusInfoWithDataItem:(id)a0 inGroup:(id)a1 groupItem:(id)a2;

- (id)initWithDataItem:(id)a0 inGroup:(id)a1 groupItem:(id)a2;
- (void)resetStatuses;
- (void)calculateStatuses;
- (void).cxx_destruct;

@end
