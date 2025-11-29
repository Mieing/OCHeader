@class WCDataItem, MMUILabel, WCAdHighlightTagInfo;

@interface WCAdHighlightTagView : MMUIView

@property (retain, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) WCAdHighlightTagInfo *tagInfo;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *numberTitleLabel;
@property (nonatomic) unsigned long long contentItemScene;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tagInfo:(id)a1 dataItem:(id)a2 contentItemScene:(unsigned long long)a3;
- (void)initView;
- (void)updateDataItem:(id)a0;
- (void)updateView;
- (void).cxx_destruct;

@end
