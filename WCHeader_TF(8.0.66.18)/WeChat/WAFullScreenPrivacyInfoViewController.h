@class NSString, UILabel;
@protocol IWARichTextViewHelper;

@interface WAFullScreenPrivacyInfoViewController : MMUIViewController <WARichTextViewHelperDelegate>

@property (copy, nonatomic) NSString *wording;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) id<IWARichTextViewHelper> richTextHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWording:(id)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (void)updateNavigationItems;
- (void)onReturn;
- (void)onLinkClicked:(id)a0 linkRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
