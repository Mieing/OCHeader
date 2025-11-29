@class NSMutableArray, UIStackView;

@interface ACCTrimCropEditorToolView : UIView

@property (retain, nonatomic) UIStackView *barStackView;
@property (retain, nonatomic) NSMutableArray *barItems;

- (void)addBarItems:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
