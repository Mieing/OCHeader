@class NSString, AWENewVideoCoverTextTemplateEditInputView, UIView;

@interface AWENewVideoCoverEditNLELayerInputModule : ACCNLELayerModule <AWENewVideoCoverTextTemplateEditInputViewDelegate, AWEVideoCoverTextStyleDelegate, AWEVideoCoverRecommendTextViewDelegate>

@property (retain, nonatomic) UIView *textEditMaskView;
@property (retain, nonatomic) AWENewVideoCoverTextTemplateEditInputView *textEditContainer;
@property (readonly, nonatomic) NSString *text;
@property (copy, nonatomic) id /* block */ onFinishEdit;
@property (copy, nonatomic) id /* block */ onFinishTextSelected;
@property (copy, nonatomic) id /* block */ onChangeEdit;
@property (copy, nonatomic) id /* block */ onSelectColor;
@property (copy, nonatomic) id /* block */ onSelectFont;
@property (copy, nonatomic) id /* block */ onSelectRecommendTextItem;
@property (copy, nonatomic) id /* block */ currentTextImageModel;
@property (copy, nonatomic) id /* block */ currentTabContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startEditWithView:(id)a0;
- (void)handleTapOnEditMaskView;
- (void)handleKeyboardChangeFrameNoti:(id)a0;
- (void)templateTextChangeTo:(id)a0 textRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)templateText:(id)a0 selectedRangeChangeTo:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)currentTextModel;
- (void)didSelectColor:(id)a0;
- (void)recommendTextView:(id)a0 didSelectItem:(id)a1;
- (id)tabContext;
- (void)templateTextFinishEdit;
- (void)templateTextBeginEdit;
- (BOOL)quitEditIfInEditing;
- (void).cxx_destruct;
- (void)didSelectFont:(id)a0;

@end
