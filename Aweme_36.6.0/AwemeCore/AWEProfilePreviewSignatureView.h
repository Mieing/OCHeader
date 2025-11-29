@class AWEProfileMentionLabel;

@interface AWEProfilePreviewSignatureView : UIView

@property (retain, nonatomic) AWEProfileMentionLabel *introLabel;

- (id)signatureStr;
- (id)aStrWithIntro:(id)a0 fontSize:(double)a1 andSignatureExtra:(id)a2 withOffset:(unsigned long long)a3 isFromOthersProfilePage:(BOOL)a4;
- (void)foldSignature;
- (void).cxx_destruct;
- (id)userModel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
