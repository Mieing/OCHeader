@class AWEIMPhotoPickerFunctionModel, UIStackView, UIVisualEffectView, UILongPressGestureRecognizer, AWEIMPhotoPickerFunctionView, UIButton;
@protocol IESIMRichButtonProtocol;

@interface AWEIMExchangeAndSendImageActionBarView : UIView

@property (retain, nonatomic) UIButton<IESIMRichButtonProtocol> *watchOnceButton;
@property (retain, nonatomic) UIButton<IESIMRichButtonProtocol> *editButton;
@property (retain, nonatomic) UIButton<IESIMRichButtonProtocol> *exchangeImageButton;
@property (retain, nonatomic) UIButton<IESIMRichButtonProtocol> *sendButton;
@property (retain, nonatomic) UIButton<IESIMRichButtonProtocol> *closeButton;
@property (retain, nonatomic) AWEIMPhotoPickerFunctionView *editView;
@property (retain, nonatomic) AWEIMPhotoPickerFunctionView *originView;
@property (retain, nonatomic) AWEIMPhotoPickerFunctionModel *originFunctionModel;
@property (nonatomic) BOOL enableWatchOnceButton;
@property (nonatomic) BOOL isWatchOnceMode;
@property (nonatomic) BOOL isThreeBtn;
@property (nonatomic) unsigned long long closeBtnStyle;
@property (nonatomic) unsigned long long sceneType;
@property (retain, nonatomic) UIStackView *outerStackView;
@property (retain, nonatomic) UIStackView *innerStackView;
@property (retain, nonatomic) UIVisualEffectView *editBtnBackgroundViewBlurView;
@property (retain, nonatomic) UIVisualEffectView *exchangeBtnBackgroundViewBlurView;
@property (retain, nonatomic) UIVisualEffectView *closeBtnBackgroundViewBlurView;
@property (retain, nonatomic) UILongPressGestureRecognizer *longpressGes;
@property (copy, nonatomic) id /* block */ watchOnceBlock;
@property (copy, nonatomic) id /* block */ exchangeImageBlock;
@property (copy, nonatomic) id /* block */ sendBlock;
@property (copy, nonatomic) id /* block */ longPressBlock;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) id /* block */ editBlock;
@property (copy, nonatomic) id /* block */ originBlock;

- (void)selectUseOrigin:(BOOL)a0;
- (void)resetSendButtonWithScene:(unsigned long long)a0;
- (void)refreshBlurUI:(BOOL)a0;
- (void)longPressGesRecognized:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withSceneType:(unsigned long long)a1 enableWatchOnceButton:(BOOL)a2 closeBtnStyle:(unsigned long long)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withSceneType:(unsigned long long)a1 enableWatchOnceButton:(BOOL)a2 isWatchOnceMode:(BOOL)a3 closeBtnStyle:(unsigned long long)a4;
- (void)p_layoutWithQuickSelectPhotoWithEdit;
- (void)p_layoutWithQuickSelectPhoto;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withSceneType:(unsigned long long)a1 enableWatchOnceButton:(BOOL)a2;
- (void).cxx_destruct;
- (void)setupUI;

@end
