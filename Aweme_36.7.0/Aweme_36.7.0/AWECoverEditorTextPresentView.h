@class UILabel, UIView;
@protocol AWECoverEditorTextPresentViewDelegate;

@interface AWECoverEditorTextPresentView : UIView

@property (retain, nonatomic) UIView *textPresentView;
@property (retain, nonatomic) UILabel *placeHolderPresentLabel;
@property (retain, nonatomic) UILabel *textLengthPresentLabel;
@property (nonatomic) BOOL isContentEmpty;
@property (weak, nonatomic) id<AWECoverEditorTextPresentViewDelegate> delegate;

- (id)getContent;
- (void)setContentWithText:(id)a0;
- (void)updateTextLength;
- (void)beginEditText;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
