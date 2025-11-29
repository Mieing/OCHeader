@class UIButton, CSJMaterialMeta, NSString, CSJAdSlot;
@protocol CSJCSJVideoBottomMaskClickDelegate;

@interface CSJVideoBottomMask : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) CSJMaterialMeta *materialMeta;
@property (retain, nonatomic) CSJAdSlot *slot;
@property (retain, nonatomic) UIButton *downloadButton;
@property (weak, nonatomic) id<CSJCSJVideoBottomMaskClickDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)c_xyDict;
- (id)initWithMaterialMeta:(id)a0 slot:(id)a1;
- (void)subViewsTapped;
- (void)maskTapped;
- (void)buildUpView;
- (void)addGesture;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
