@class UIButton, UIImageView, IESLiveInteractReplacePanelGuestSlotsModel;

@interface IESLiveInteractReplacePanelGuestSlotsView : UIView

@property (retain, nonatomic) UIButton *clickBtn;
@property (retain, nonatomic) UIImageView *imageView;
@property (weak, nonatomic) IESLiveInteractReplacePanelGuestSlotsModel *model;
@property (copy, nonatomic) id /* block */ IESLiveInteractReplacePanelGuestSlotClickBlock;

- (void)onClick;
- (void)updateImageWithCurmodel;
- (void)initSuscribe;
- (void)upDateWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)initUI;

@end
