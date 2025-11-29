@class WCDataItem, MMUIButton;
@protocol WCAdConventionalHalfScreenMediaViewDelegate;

@interface WCAdConventionalHalfScreenMediaBaseView : MMUIView

@property (retain, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) MMUIButton *backgroundButton;
@property (weak, nonatomic) id<WCAdConventionalHalfScreenMediaViewDelegate> delegate;
@property (nonatomic) long long visibleType;

+ (id)fetchHalfScreenMediaViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataItem:(id)a1 clickIndex:(long long)a2 delegate:(id)a3;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataItem:(id)a1 delegate:(id)a2;
- (struct CGSize { double x0; double x1; })fetchMediaSize;
- (double)fetchMediaHeightWithWidth:(double)a0;
- (double)fetchMediaWidthWithHeight:(double)a0;
- (double)fetchMediaContentHeightWithWidth:(double)a0;
- (double)fetchMediaContentWidthWithHeight:(double)a0;
- (void)updateMediaContentWithHeight:(double)a0;
- (void)updateMediaContentWithWidth:(double)a0 height:(double)a1;
- (void)layoutSubviews;
- (void)onHostViewWillEnter;
- (void)onHostViewDidEnter;
- (void)onHostViewDidExit;
- (void)onViewWillAppear;
- (void)onViewDidAppear;
- (void)onViewWillDisappear;
- (void)onViewDidDisappear;
- (id)fetchMediaImage;
- (id)fetchCurrentSnapshot;
- (long long)fetchCurrentIndex;
- (void)onBackgroundButtonBeClicked;
- (void)sendMediaViewContentBeClickedEvent;
- (id)reportManager;
- (void).cxx_destruct;

@end
