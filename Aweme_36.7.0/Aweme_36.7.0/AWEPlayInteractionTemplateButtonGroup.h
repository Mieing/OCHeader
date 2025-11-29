@class UIStackView, NSArray, AWEPlayInteractionContext, NSString;
@protocol AWEPlayInteractionBottomButtonViewDelegateProtocol;

@interface AWEPlayInteractionTemplateButtonGroup : UIView <AWEPlayInteractionBottomButtonViewProtocol>

@property (copy, nonatomic) NSArray *configGroup;
@property (weak, nonatomic) AWEPlayInteractionContext *context;
@property (retain, nonatomic) UIStackView *groupView;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonViewDelegateProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (id)buttonArray;
- (void)setupBinding;
- (void)setupGroup;
- (void)playFlashAnimationIfNeeded;
- (id)initWithConfigGroup:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
