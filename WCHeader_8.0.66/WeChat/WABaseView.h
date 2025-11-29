@class NSNumber, NSString, UILabel, UIView, NSMutableDictionary, NSDictionary, MoveWithTouchAlgorithm, UIColor;
@protocol WABaseViewDelegate;

@interface WABaseView : WATouchBaseView <MoveWithTouchAlgorithmDelegate> {
    UILabel *_label;
    UIView *_background;
    double _padding[4];
    double _alignOffset;
    double _rotate;
    double _scaleX;
    double _scaleY;
    BOOL _clickable;
    NSDictionary *_fontWeightDic;
}

@property (retain, nonatomic) NSDictionary *style;
@property (retain, nonatomic) UIColor *customBackgroundColor;
@property (weak, nonatomic) WABaseView *followBaseView;
@property (retain, nonatomic) NSMutableDictionary *followerBaseViewDic;
@property (retain, nonatomic) NSString *userData;
@property (weak, nonatomic) id<WABaseViewDelegate> delegate;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL bEventToWebView;
@property (nonatomic) unsigned int viewId;
@property (nonatomic) BOOL fixed;
@property (nonatomic) unsigned long long referrerPolicyType;
@property (retain, nonatomic) MoveWithTouchAlgorithm *moveAlgorithm;
@property (nonatomic) BOOL parentDraggable;
@property (retain, nonatomic) NSNumber *workerIdNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setLabel:(id)a0;
- (void)layoutSubviews;
- (void)updateBackgoundImage:(id)a0 iconPath:(id)a1;
- (void)setClickable:(BOOL)a0;
- (id)getBackgroundImage:(id)a0;
- (void)setBackground:(id)a0 iconPath:(id)a1 style:(id)a2 clickable:(BOOL)a3;
- (void)setBorderStyle:(id)a0;
- (void)onButtonClick:(id)a0;
- (void)doClickAction;
- (BOOL)clickable;
- (void)followOtherBaseView:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)shouldLockToPortrait;
- (BOOL)isInDraggableContext;
- (id)onMoveWithTouchAlgorithmRequestView;
- (void)onMoveWithTouchAlgorithmResultMoveTo:(struct CGPoint { double x0; double x1; })a0;
- (void)onMoveWithTouchAlgorithmTaped:(struct CGPoint { double x0; double x1; })a0;
- (void)onMoveEndWithTouchAlgorithmResultMoveTo:(struct CGPoint { double x0; double x1; })a0;
- (double)getFontWeightForKey:(id)a0;
- (void).cxx_destruct;

@end
