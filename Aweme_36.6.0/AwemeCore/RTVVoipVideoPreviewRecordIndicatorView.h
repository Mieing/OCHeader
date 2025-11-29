@class UIStackView, NSString, UILabel, RTVVoipSession, UIView;
@protocol RxInjector;

@interface RTVVoipVideoPreviewRecordIndicatorView : UIView <RTVVoipSessionObserver, RTVRendererProtocol>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) RTVVoipSession *voipSession;
@property (readonly, nonatomic) UIStackView *contentStackView;
@property (readonly, nonatomic) UILabel *recordIndicatorLabel;
@property (readonly, nonatomic) UIView *recordIndicatorDotView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)__createComponents;
- (void)__layoutComponents;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
