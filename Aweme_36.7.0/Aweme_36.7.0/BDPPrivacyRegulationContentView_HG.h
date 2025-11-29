@class NSString, BDPTextView;
@protocol BDPPrivacyRegulationContentViewDelegate_HG;

@interface BDPPrivacyRegulationContentView_HG : UIView <UITextViewDelegate>

@property (retain, nonatomic) BDPTextView *privacyTextView;
@property (weak, nonatomic) id<BDPPrivacyRegulationContentViewDelegate_HG> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContent:(id)a0 height:(double)a1;
- (void)setPrivacyDesc:(id)a0;
- (void)setup_textView:(double)a0;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;

@end
