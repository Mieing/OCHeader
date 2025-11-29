@class NSArray, NSString, AWEAwemeModel, UITapGestureRecognizer;

@interface AFDRichAwemeFullPageDescriptionTextView : UITextView <UITextViewDelegate, UIGestureRecognizerDelegate>

@property (copy, nonatomic) NSArray *highlightModels;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) UITapGestureRecognizer *doubleTapRecognizer;
@property (nonatomic) BOOL shouldTrackDisplay;
@property (nonatomic) BOOL isDisplayed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)excuteSearch:(id)a0;
- (void)trackSearchMenuShow;
- (void)handleDetailVCDisplayNotification:(id)a0;
- (void)doubleTapClick;
- (id)highlightModelForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)trackSearchMenuClick;
- (void)configTitleWithModel:(id)a0 referString:(id)a1 titleText:(id)a2;
- (void)configBodyWithModel:(id)a0 referString:(id)a1;
- (BOOL)_shouldRespondsToGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
