@class HTSEventContext, NSDictionary, HTSLiveFeedbackCard, UIView, NSString;
@protocol IESHYContainerProtocol;

@interface IESLiveFeedbackCard : NSObject <IESHYHybridViewLifecycleProtocol, IESLiveFeedbackCardLayoutProtocol>

@property (retain, nonatomic) NSDictionary *extraParams;
@property (retain, nonatomic) HTSLiveFeedbackCard *feedbackModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) NSDictionary *feedbackData;
@property (nonatomic) double lightFeedbackCardShowTime;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (nonatomic) double hybridContainerHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (id)lynxURL;
- (void)postUserFeedbackCardIShow;
- (void)loadHybridContainer;
- (void)showFeedbackCard;
- (void)loadHybridContainerWithPreferredFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)removeFeedbackCard;
- (void)updateFeedbackCardSize;
- (struct CGSize { double x0; double x1; })hybridContentSize;
- (id)initWithFeedbackData:(id)a0 extraParams:(id)a1 trackContext:(id)a2;
- (double)hybridContentHeight;
- (void)dismissAnimated;
- (void).cxx_destruct;
- (id)fallbackURL;
- (id)cardType;
- (id)questionText;

@end
