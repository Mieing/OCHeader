@class NSMutableArray, UIView;

@interface SonicView : MMScrollView {
    NSMutableArray *_headImageList;
    NSMutableArray *_firstPageRandomArray;
}

@property (retain, nonatomic) UIView *m_containView;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getFrameByIndex:(int)a0;
- (int)getRandomNumber;
- (void)popupView:(id)a0;
- (void)fadeinItems:(id)a0;
- (void)addHeadImageList:(id)a0;
- (void)onGetMsg:(id)a0 PushContact:(id)a1;
- (void)onVerifyOk:(id)a0;
- (void).cxx_destruct;

@end
