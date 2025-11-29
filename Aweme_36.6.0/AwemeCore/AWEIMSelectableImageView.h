@class NSString, UIImageView, AWEIMSelectableStatusView, UIView;

@interface AWEIMSelectableImageView : UIView

@property (nonatomic) BOOL select;
@property (nonatomic) long long selectIndex;
@property (nonatomic) unsigned long long selectCount;
@property (nonatomic) double selectTrailing;
@property (nonatomic) double selectTop;
@property (retain, nonatomic) AWEIMSelectableStatusView *selectStatusView;
@property (retain, nonatomic) UIView *touchView;
@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) UIView *disableMaskView;
@property (retain, nonatomic) UIImageView *innerImageView;
@property (copy, nonatomic) id /* block */ selectAreaTappedBlock;
@property (nonatomic) BOOL enable;
@property (retain, nonatomic) NSString *accessibilityContent;
@property (nonatomic) BOOL newStyle;

- (void)setSelect:(BOOL)a0 selectIndex:(long long)a1 selectCount:(unsigned long long)a2 animated:(BOOL)a3 showMask:(BOOL)a4;
- (void)tapOnSelectImage:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 selectImageTrailing:(double)a1 selectImageTop:(double)a2 showUnSelectImage:(BOOL)a3 newStyle:(BOOL)a4;
- (void)updateAccessibilityContent:(id)a0 isSelect:(BOOL)a1;
- (void).cxx_destruct;

@end
