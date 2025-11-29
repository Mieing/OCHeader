@class NSString, AWEDislikeEntityModel, NSIndexPath, AWEDislikePanelInputTextView;
@protocol AWEDislikeInputViewCellDelegate;

@interface AWEDislikeInputViewCell : UICollectionViewCell <AWEDislikePanelInputViewDelegate>

@property (retain, nonatomic) AWEDislikePanelInputTextView *textView;
@property (weak, nonatomic) id<AWEDislikeInputViewCellDelegate> delegate;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (retain, nonatomic) AWEDislikeEntityModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)textViewDidChangeText:(id)a0;
- (void)textViewWillChangeHeight:(float)a0;
- (void)textViewDidChangeHeight:(float)a0;
- (void)keyboardWillShowWithAdditionalAnimation:(struct CGSize { double x0; double x1; })a0;
- (void)keyboardWillChangeFrameWithAdditionalAnimation:(struct CGSize { double x0; double x1; })a0;
- (void)keyboardWillHideWithAdditionalAnimation:(struct CGSize { double x0; double x1; })a0;
- (void)p_setupUI;
- (void)keyboardDidHide:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (void)keyboardWillShow:(struct CGSize { double x0; double x1; })a0;
- (void)keyboardWillHide:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyboardDidChangeFrame:(struct CGSize { double x0; double x1; })a0;
- (void)keyboardDidShow:(struct CGSize { double x0; double x1; })a0;
- (void)keyboardWillChangeFrame:(struct CGSize { double x0; double x1; })a0;

@end
