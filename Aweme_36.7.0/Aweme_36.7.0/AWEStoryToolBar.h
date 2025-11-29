@class NSString, AWEEditGradientView, UIView, UIButton;
@protocol AWEStoryColorChooseViewProtocol, ACCFontChooseViewProtocol;

@interface AWEStoryToolBar : UIView <AWEStoryToolBarProtocol>

@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) AWEEditGradientView *gradientView;
@property (nonatomic) long long type;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *alignmentButton;
@property (retain, nonatomic) UIButton *textReaderButton;
@property (retain, nonatomic) UIView<ACCFontChooseViewProtocol> *fontChooseView;
@property (retain, nonatomic) UIView<AWEStoryColorChooseViewProtocol> *colorChooseView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)barHeight;

- (void)setupChooseColorAndFontWithoutAlignUI;
- (void)setupChooseColorAndFontUI;
- (void)setupChooseColorFontAndTextReaderUI;
- (void)setupChooseColorUI;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (void)setupUI;

@end
