@class NSArray, NSString, AWEPageContext, AWEProgressUIConfig;
@protocol AWEProgressContextProtocol;

@interface AWEProgressDecoratorDotView : UIView <AWEProgressDecoratorViewProtocol>

@property (retain, nonatomic) AWEProgressUIConfig *config;
@property (retain, nonatomic) AWEPageContext<AWEProgressContextProtocol> *context;
@property (nonatomic) unsigned long long currentStatus;
@property (nonatomic) unsigned long long currentAction;
@property (nonatomic) double currentPercentage;
@property (copy, nonatomic) NSArray *dotViewArray;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfig:(id)a0 context:(id)a1;
- (void)progressValueChangedTo:(double)a0 animated:(BOOL)a1;
- (void)layoutDecoratorViewWithSuper:(id)a0 targetViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)changeProgressStatusTo:(unsigned long long)a0 withAction:(unsigned long long)a1 animate:(BOOL)a2;
- (void)layoutDotView;
- (void)initDotView;
- (id)dotViewUIConfig;
- (BOOL)shouldVerifyProgressValue:(double)a0;
- (double)verifiedProgressValue:(double)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)setupUI;

@end
