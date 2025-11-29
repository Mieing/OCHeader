@class WCDataItem;

@interface WCTimelineDeleteDataItemWrap : NSObject

@property (readonly, nonatomic) WCDataItem *deleteDataItem;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } tableViewContentOffset;

- (id)initWithDeleteDataItem:(id)a0 tableViewContentOffset:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
