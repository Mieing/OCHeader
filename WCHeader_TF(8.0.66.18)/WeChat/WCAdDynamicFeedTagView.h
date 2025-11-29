@class WCAdvertiseInfo, WCAdDynamicFeedElementInfo;

@interface WCAdDynamicFeedTagView : MMUIView

@property (retain, nonatomic) WCAdDynamicFeedElementInfo *elementInfo;
@property (retain, nonatomic) WCAdvertiseInfo *adInfo;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 elementInfo:(id)a1 adInfo:(id)a2;
- (void)generateTagElements;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
