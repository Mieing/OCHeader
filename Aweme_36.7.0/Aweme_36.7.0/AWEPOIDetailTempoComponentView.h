@class AWEPOIDetailTempoComponentViewModel, NSString, NSTimer, UIView, NSNumber;
@protocol IESLLTempoContainerProtocol;

@interface AWEPOIDetailTempoComponentView : DitoComponentView

@property (weak, nonatomic) AWEPOIDetailTempoComponentViewModel *viewModel;
@property (retain, nonatomic) UIView<IESLLTempoContainerProtocol> *containerView;
@property (copy, nonatomic) NSString *scriptDataUniqueId;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSNumber *lastScrollViewOffsetY;

- (void)updateViewModel:(id)a0;
- (id)eventExtraParams;
- (void)sendTempoEvent:(id)a0 params:(id)a1;
- (void)loadCardTempoContainer;
- (void)trySendScriptVmData:(id)a0 uniqueId:(id)a1;
- (void)setupPresetHeight:(double)a0 componentWidth:(double)a1;
- (id)tempoExtension;
- (void)cancelPresetHeight;
- (void).cxx_destruct;
- (void)invalidateTimer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
