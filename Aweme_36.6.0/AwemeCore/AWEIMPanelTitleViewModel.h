@class NSAttributedString;

@interface AWEIMPanelTitleViewModel : AWEIMPanelViewModel

@property (nonatomic) long long numberOfLines;
@property (copy, nonatomic) NSAttributedString *attributedText;

+ (id)titleViewModelWithTitle:(id)a0 fontSize:(double)a1 lineHeight:(double)a2;
+ (double)contentHeightWithAttributedText:(id)a0 contentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
+ (id)titleViewModelWithTitle:(id)a0;
+ (id)titleViewModelWithSubtitle:(id)a0;

- (double)contentHeight;
- (void).cxx_destruct;

@end
