@class NSArray, NSString, UIStackView;

@interface IESECSliceXCartBottomButtonContainer : IESECSliceXViewElementView <CAAnimationDelegate>

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSArray *bottomButtons;
@property (nonatomic) BOOL isAnimating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)updateWithSliceXElement:(id)a0 error:(id *)a1;
- (id)getBottomButtonWithData:(id)a0;
- (void)handleBottomButtonTap:(id)a0;
- (void)triggerSliceXActionWithKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
