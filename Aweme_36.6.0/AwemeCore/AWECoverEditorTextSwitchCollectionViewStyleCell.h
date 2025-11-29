@class ACCTextTypeFaceViewController;
@protocol AWECoverEditorTextSwitchCollectionViewStyleCellDelegate;

@interface AWECoverEditorTextSwitchCollectionViewStyleCell : UIView

@property (retain, nonatomic) ACCTextTypeFaceViewController *textTypeFaceController;
@property (weak, nonatomic) id<AWECoverEditorTextSwitchCollectionViewStyleCellDelegate> delegate;

- (void)updateSelectStatusWithColor:(id)a0 style:(unsigned long long)a1 alignment:(long long)a2;
- (void)clearStyleSelectStatus;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
