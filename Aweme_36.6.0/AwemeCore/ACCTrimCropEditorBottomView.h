@class UIStackView, ACCTrimCropBarItem, NSMutableArray, UIButton;

@interface ACCTrimCropEditorBottomView : UIView

@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *finishButton;
@property (retain, nonatomic) UIStackView *barStackView;
@property (copy, nonatomic) id /* block */ cancelAction;
@property (copy, nonatomic) id /* block */ finishAction;
@property (copy, nonatomic) id /* block */ switchItemAction;
@property (retain, nonatomic) NSMutableArray *barItems;
@property (retain, nonatomic) ACCTrimCropBarItem *selectedBarItem;

- (void)finishAction:(id)a0;
- (void)switchBarItem:(id)a0 isAuto:(BOOL)a1;
- (id)initWithCancelAction:(id /* block */)a0 finishAction:(id /* block */)a1 switchItemAction:(id /* block */)a2;
- (void)addBarItems:(id)a0;
- (void)setupSubViews;
- (void).cxx_destruct;
- (id)init;
- (void)cancelAction:(id)a0;

@end
