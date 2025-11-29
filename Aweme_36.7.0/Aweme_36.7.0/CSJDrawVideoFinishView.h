@class CSJMaterialMeta, CSJAdSlot, UIImageView, NSString, UIView, UIButton;

@interface CSJDrawVideoFinishView : UIView <CSJVideofinishViewProtocol>

@property (retain, nonatomic) UIView *csj_maskView;
@property (retain, nonatomic) UIButton *detailButton;
@property (retain, nonatomic) UIButton *replayButton;
@property (retain, nonatomic) UIImageView *finishBackgroundView;
@property (copy, nonatomic) id /* block */ replayClick;
@property (copy, nonatomic) id /* block */ detailClick;
@property (retain, nonatomic) CSJMaterialMeta *materialMeta;
@property (retain, nonatomic) CSJAdSlot *adSlot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addAccessibilityIdentifier;
- (void)buildViews;
- (void)goToDetail:(id)a0;
- (void)setFinishViewDataWithMaterialMeta:(id)a0;
- (void)reSetFrameWithsuperFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (void)replay:(id)a0;

@end
