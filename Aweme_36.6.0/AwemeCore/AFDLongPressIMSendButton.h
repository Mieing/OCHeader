@class NSDictionary, AWEButton, NSString;
@protocol AWEIMShareModelProtocol;

@interface AFDLongPressIMSendButton : UIView <AFDHoverable>

@property (retain, nonatomic) id<AWEIMShareModelProtocol> shareModel;
@property (nonatomic) long long state;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) id /* block */ trackSendClickedBlock;
@property (retain, nonatomic) NSDictionary *infoDict;
@property (retain, nonatomic) AWEButton *actionButton;
@property (nonatomic) BOOL enableDynamicTheme;
@property (readonly, nonatomic) long long afdHoverStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)actionButtonClicked;
- (void)hoverBegan:(id)a0;
- (void)hoverEnded:(id)a0;
- (void)hoverCancelled:(id)a0;
- (void)trackWithdrawClicked;
- (void)configWithShareModel:(id)a0 shareState:(long long)a1 clickBlock:(id /* block */)a2 trackSendClickedBlock:(id /* block */)a3 infoDict:(id)a4 animated:(BOOL)a5;
- (void).cxx_destruct;
- (id)init;
- (id)titleForState:(long long)a0;
- (id)backgroundColorForState:(long long)a0;
- (id)titleColorForState:(long long)a0;
- (void)setupUI;
- (void)updateUI;
- (void)updateUIAnimated:(BOOL)a0;
- (void)updateTitle:(id)a0;

@end
