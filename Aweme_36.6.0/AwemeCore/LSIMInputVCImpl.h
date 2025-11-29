@class LSIMInputViewController, NSString, NSDictionary, UIView;
@protocol LSIMInputVCDelegate;

@interface LSIMInputVCImpl : NSObject <LSIMInputVCProtocol>

@property (retain, nonatomic) LSIMInputViewController *inputVC;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) UIView *textView;
@property (readonly, copy, nonatomic) NSString *currentText;
@property (readonly, nonatomic) long long currentInputType;
@property (weak, nonatomic) id<LSIMInputVCDelegate> inputVCDelegate;
@property (copy, nonatomic) NSDictionary *adParams;
@property (nonatomic) long long maxLength;
@property (nonatomic) BOOL notNeedLeftButtons;
@property (nonatomic) BOOL needDefaultEmotionIconPanelOnly;
@property (nonatomic) BOOL panelUseLocalConfigOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideKeyboardByUser:(BOOL)a0;
- (void)syncRefreshSubviewsFrame;
- (double)defaultInputHeight;
- (void)setFloatMode:(BOOL)a0;
- (void)updateInputPanelActionModels:(id)a0;
- (void)creatInputConfigItemsWithFunctions:(id)a0;
- (id)initWithWithFunctions:(id)a0;
- (void)hideKeyboard;
- (void).cxx_destruct;
- (void)showKeyboard;
- (void)clearContent;

@end
