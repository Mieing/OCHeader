@class WCDataItem, WCAdvertiseInfo, WCAdDynamicFeedElementInfo, NSMutableArray;

@interface WCAdDynamicFeedGridView : MMUIView

@property (retain, nonatomic) WCAdDynamicFeedElementInfo *elementInfo;
@property (retain, nonatomic) WCAdvertiseInfo *adInfo;
@property (retain, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) NSMutableArray *gridElements;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 elementInfo:(id)a1 adInfo:(id)a2 dataItem:(id)a3;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })calcGridViewSize;
- (void)generateGridElements;
- (id)fetchGridElements;
- (void).cxx_destruct;

@end
