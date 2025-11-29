@class WCDataItem;

@interface WCAdBlankBannerView : WCAdBaseBarView

@property (retain, nonatomic) WCDataItem *dataItem;
@property (nonatomic) unsigned long long itemScene;

+ (double)viewHeight:(id)a0 maxWidth:(double)a1;
+ (double)topMargin:(id)a0 maxWidth:(double)a1;
+ (double)bottomMargin;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataItem:(id)a1 contentItemScene:(unsigned long long)a2;
- (void).cxx_destruct;

@end
