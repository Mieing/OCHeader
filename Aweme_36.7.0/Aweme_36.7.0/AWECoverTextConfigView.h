@class AWECoverTextPackageInnerView, AWECoverTextStorage, AWECoverTextLayoutManager, AWECoverTextConfig, NSString, NSMutableArray, AWECoverTextTextView;

@interface AWECoverTextConfigView : UIView <UITextViewDelegate>

@property (weak, nonatomic) AWECoverTextPackageInnerView *packageView;
@property (retain, nonatomic) AWECoverTextTextView *textView;
@property (retain, nonatomic) NSMutableArray *backgroundImageViews;
@property (retain, nonatomic) AWECoverTextStorage *textStorage;
@property (retain, nonatomic) AWECoverTextLayoutManager *layoutManager;
@property (retain, nonatomic) AWECoverTextStorage *placeHolderStorage;
@property (retain, nonatomic) AWECoverTextLayoutManager *placeHolderLayoutManger;
@property (retain, nonatomic) AWECoverTextConfig *textConfig;
@property (copy, nonatomic) id /* block */ textDidChangeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPackageView:(id)a0;
- (void)updateViewSizeWithLimitWidth:(double)a0;
- (void).cxx_destruct;
- (BOOL)canBecomeFocused;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)layoutSubviews;
- (void)textViewDidChange:(id)a0;

@end
