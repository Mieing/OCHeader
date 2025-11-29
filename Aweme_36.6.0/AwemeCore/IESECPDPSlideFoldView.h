@class IESECUIImageView, IESECPDPSlideFoldProgress, NSString, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol IESECPDPSlideFoldViewDelegate;

@interface IESECPDPSlideFoldView : UIView <IESECPDPSlideFoldProgressDelegate>

@property (retain, nonatomic) IESECUIImageView *foldView;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (nonatomic) double startPercent;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (nonatomic) double maxWidth;
@property (retain, nonatomic) IESECPDPSlideFoldProgress *progress;
@property (weak, nonatomic) id<IESECPDPSlideFoldViewDelegate> foldDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFoldDelegate:(id)a0 originalStatusIsFold:(BOOL)a1 maxWidth:(double)a2;
- (void)showInScreen;
- (void)handelPercent:(double)a0;
- (void)changeFoldViewDirection:(BOOL)a0;
- (void)clickFoldView:(id)a0;
- (double)percentWithTranslationX:(double)a0 isEnd:(BOOL)a1;
- (void)handleFoldStatusWithPercent:(double)a0;
- (void)interruptGesture;
- (void).cxx_destruct;
- (void)panGestureHandler:(id)a0;
- (void)setupUI;

@end
