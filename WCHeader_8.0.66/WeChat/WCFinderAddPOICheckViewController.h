@class UIButton, NSString, UIImageView, MMPickLocationViewController, UILabel, MMUIButton, RichTextView;

@interface WCFinderAddPOICheckViewController : MMUIViewController <ILinkEventExt, MMPickLocationViewControllerDelegate>

@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *previewImageView;
@property (retain, nonatomic) MMUIButton *checkBox;
@property (retain, nonatomic) RichTextView *protoTextView;
@property (retain, nonatomic) UIButton *addButton;
@property (retain, nonatomic) MMPickLocationViewController *pickLocationViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFinderUsername:(id)a0;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)viewDidLoad;
- (void)tapCheckBox;
- (void)updateAddButton;
- (void)tapAddButton;
- (void)showPickLocationVC;
- (void)tapBackButton;
- (void)initViews;
- (id)onGetRightBarButton;
- (void)onTapAddButton;
- (void)onCancelSeletctedLocation;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
