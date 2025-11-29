@class NSString, AWEPageContext, AWEAwemeModel, AWEPlayInteractionBaseElement, UIView;
@protocol AWEPlayInteractionContextProtocol, AWEFeedLearnMoreModifyButtonProtocol;

@interface AWELearnMoreModifyContainView : UIView <AWEFeedLearnMoreModifyContainProtocol>

@property (weak, nonatomic) AWEAwemeModel *aweme;
@property (weak, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (weak, nonatomic) AWEPlayInteractionBaseElement *element;
@property (retain, nonatomic) UIView<AWEFeedLearnMoreModifyButtonProtocol> *buttonView;
@property (retain, nonatomic) Class buttonClass;
@property (copy, nonatomic) id /* block */ clickPressEndBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playFlashAnimated:(BOOL)a0;
- (id)initWithAweme:(id)a0 context:(id)a1 element:(id)a2;
- (void)playAdLearnMoreViewAnimation;
- (void)onLearnMoreViewClicked:(id)a0;
- (double)containViewHeight;
- (void)registerClass;
- (void).cxx_destruct;
- (void)reset;
- (void)setupUI;

@end
