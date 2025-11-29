@class NSString, NSArray, CJPayImageView, UIImage, UILabel;

@interface CJPayLoadingButton : CJPayButton <CJPayBaseLoadingProtocol>

@property (retain, nonatomic) CJPayImageView *activityIndicator;
@property (copy, nonatomic) NSString *originalTitleText;
@property (retain, nonatomic) UIImage *originalImage;
@property (retain, nonatomic) UILabel *visibleTitleLabel;
@property (copy, nonatomic) NSArray *titleSyncProperty;
@property (nonatomic) BOOL isKVOInit;
@property (nonatomic) BOOL disablesInteractionWhenLoading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startLoadingWithWindowEnable:(BOOL)a0;
- (void)stopRightLoading;
- (void)stopLoadingWithTitle:(id)a0;
- (void)startRightLoading;
- (void)stopRightLoadingWithTitle:(id)a0;
- (void)startLeftLoading;
- (void)stopLeftLoading;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopLoading;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
