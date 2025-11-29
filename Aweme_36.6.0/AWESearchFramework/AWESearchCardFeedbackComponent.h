@class AWESearchCardFeedbackComponentModel, NSString, AWESearchFeedbackView, AWESearchEventDispather, UIView, NSDictionary;
@protocol AWESearchContainerProtocol, AWESearchComponentProtocol;

@interface AWESearchCardFeedbackComponent : AWESearchComponent <AWESearchCardFeedbackComponentProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWESearchFeedbackView *feedbackButton;
@property (retain, nonatomic) AWESearchCardFeedbackComponentModel *componentModel;
@property (copy, nonatomic) id /* block */ customShowBlock;
@property (copy, nonatomic) id /* block */ customClickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWESearchEventDispather *eventDispather;
@property (weak, nonatomic) id<AWESearchContainerProtocol> containerContext;
@property (weak, nonatomic) id<AWESearchComponentProtocol> componentContext;
@property (copy, nonatomic) NSDictionary *dictLogExtraInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) BOOL hidden;

+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)a0 width:(double)a1;

- (void)componentViewDidAppear:(BOOL)a0;
- (void)trackFeedBackShow;
- (void)trackFeedBackClick;
- (void)singeTapButton;
- (void).cxx_destruct;
- (id)componentView;
- (void)updateWithModel:(id)a0;

@end
