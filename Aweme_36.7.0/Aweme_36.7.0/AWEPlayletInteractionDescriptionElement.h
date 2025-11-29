@class UIView, NSString, DUXContentSheet, AWEPlayletInteractionSummaryController, UIImage, AWEBinding, BDImageView, UILabel, BDXBridgeEventSubscriber;

@interface AWEPlayletInteractionDescriptionElement : AWEPlayInteractionLeftElement <AWEElementSelfFilterProtocol, DUXPartialSheetDelegate, DUXSheetDelegate>

@property (retain, nonatomic) BDImageView *coverImageView;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *dotView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) DUXContentSheet *sheet;
@property (retain, nonatomic) BDXBridgeEventSubscriber *dismissSubscriber;
@property (retain, nonatomic) AWEPlayletInteractionSummaryController *contentVC;
@property (retain, nonatomic) AWEBinding *tabbarBinding;
@property (nonatomic) BOOL isPanelShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;

- (void)partialSheetWillDismiss:(id)a0;
- (void)sheetWillDismiss:(id)a0;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)setupObserver;
- (void)onBackgroundClicked;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)setupUI;

@end
