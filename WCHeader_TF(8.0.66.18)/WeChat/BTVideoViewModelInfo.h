@class NSArray;
@protocol BTItemCellViewModelVideoPlayProtocol;

@interface BTVideoViewModelInfo : MMObject

@property (nonatomic) BOOL isDragging;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) BOOL isWifiOrDawang;
@property (retain, nonatomic) id<BTItemCellViewModelVideoPlayProtocol> curFocusItemCellViewModelVideoPlay;
@property (retain, nonatomic) NSArray *exposureItemList;

- (id)findExposureItemWithIndexPath:(id)a0;
- (void).cxx_destruct;

@end
