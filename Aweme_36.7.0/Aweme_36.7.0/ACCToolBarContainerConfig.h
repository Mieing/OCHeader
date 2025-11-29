@class NSNumber, NSArray;

@interface ACCToolBarContainerConfig : NSObject

@property (nonatomic) BOOL hideToolBar;
@property (nonatomic) BOOL forceExpand;
@property (retain, nonatomic) NSNumber *foldedStatusMaxShowItemCount;
@property (retain, nonatomic) NSArray *sortedItemArray;
@property (nonatomic) BOOL enableHDRRendering;

- (void).cxx_destruct;

@end
