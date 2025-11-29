@class DUXBaseLabel, NSString, NSTimer, DUXContentSheet, UIView, AWEHPPinTopComponentUIConfig, DUXButton;
@protocol AWEHPPinTopUILifeCycleProtocol;

@interface AWEHPPinTopPanel : NSObject <DUXSheetDelegate, AWEHPPinTopComponentProtocol>

@property (retain, nonatomic) AWEHPPinTopComponentUIConfig *config;
@property (retain, nonatomic) DUXContentSheet *sheet;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) DUXButton *primaryButton;
@property (retain, nonatomic) DUXButton *secondaryButton;
@property (retain, nonatomic) DUXBaseLabel *titleLabel;
@property (retain, nonatomic) DUXBaseLabel *subTitleLabel;
@property (retain, nonatomic) UIView<AWEHPPinTopUILifeCycleProtocol> *businessView;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ showBlock;
@property (retain, nonatomic) NSTimer *autoHideTimer;
@property (nonatomic) BOOL isDismissing;
@property (nonatomic) BOOL disableAutoDismiss;
@property (nonatomic) BOOL shouldDismissWhenPointOutSide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidClickCloseButton:(id)a0;
- (BOOL)sheetWillStayAfterClickCloseButton;
- (BOOL)sheetWillStayAfterClickMaskArea;
- (void)sheetDidDragToDismiss:(id)a0;
- (void)clickCloseButton;
- (void)startAutoHideIfNeeded;
- (void)showPinTopComponentOnViewController:(id)a0 withButtonAction:(id /* block */)a1 didShow:(id /* block */)a2 didDismiss:(id /* block */)a3;
- (void)p_dismiss;
- (void)clickPrimaryButton;
- (void)clickSecondaryButton;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)setupUI;

@end
