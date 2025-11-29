@class ACCTextStyleViewController;
@protocol AWECoverEditorTextSwitchCollectionViewFontCellDelegate;

@interface AWECoverEditorTextSwitchCollectionViewFontCell : UIView

@property (retain, nonatomic) ACCTextStyleViewController *textStyleController;
@property (weak, nonatomic) id<AWECoverEditorTextSwitchCollectionViewFontCellDelegate> delegate;

- (void)updateSelectStatusWithFont:(id)a0;
- (void)clearFontSelectStatus;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
