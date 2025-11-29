@class WCDataItem, NSString, WCAdRollTextView, WCAdURLImageView;

@interface WCAdRollView : MMUIView

@property (retain, nonatomic) WCDataItem *dataItem;
@property (copy, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) WCAdURLImageView *rollIcon;
@property (retain, nonatomic) WCAdRollTextView *rollText;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataItem:(id)a1 iconUrl:(id)a2 textList:(id)a3;
- (void)setTextList:(id)a0;
- (void)initView;
- (void)onViewDisplay:(BOOL)a0;
- (void).cxx_destruct;

@end
