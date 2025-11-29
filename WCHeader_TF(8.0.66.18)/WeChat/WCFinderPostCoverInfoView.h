@class WCFinderFeedStaticCoverView, MMUIView, WCFinderDataItem, MMUIButton;
@protocol WCFinderPostCoverInfoViewProtocol;

@interface WCFinderPostCoverInfoView : MMUIView

@property (retain, nonatomic) WCFinderFeedStaticCoverView *previewView;
@property (retain, nonatomic) MMUIButton *addMediaBtn;
@property (retain, nonatomic) MMUIView *deleteBtn;
@property (retain, nonatomic) MMUIButton *deleteMediaButton;
@property (retain, nonatomic) MMUIButton *chooseCoverBtn;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (weak, nonatomic) id<WCFinderPostCoverInfoViewProtocol> delegate;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataItem:(id)a1 configFlag:(unsigned long long)a2;
- (void)layoutAllSubviews;
- (void)hiddenAllSubviews;
- (void)loadCoverByDataItem:(id)a0 configFlag:(unsigned long long)a1;
- (void)onClickDeleteBtn;
- (void)onClickChooseCoverBtn;
- (void)onClickPreviewAction;
- (void)onClickAddMediaBtn;
- (void).cxx_destruct;

@end
