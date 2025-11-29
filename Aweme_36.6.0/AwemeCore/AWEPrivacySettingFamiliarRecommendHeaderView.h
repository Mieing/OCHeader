@class NSString, UITextView;

@interface AWEPrivacySettingFamiliarRecommendHeaderView : UITableViewHeaderFooterView <UITextViewDelegate>

@property (retain, nonatomic) UITextView *textView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)p_attributedText;
- (double)p_lineHeightOffset;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)initWithReuseIdentifier:(id)a0;

@end
