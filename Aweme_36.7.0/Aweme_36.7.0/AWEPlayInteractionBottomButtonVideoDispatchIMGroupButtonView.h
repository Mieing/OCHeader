@class NSString, UIImageView, DUXPluralAvatar, UILabel, AWEPlayInteractionBottomButtonVideoDispatchIMGroupViewModel;
@protocol AWEPlayInteractionBottomButtonViewDelegateProtocol;

@interface AWEPlayInteractionBottomButtonVideoDispatchIMGroupButtonView : UIView <AWEPlayInteractionBottomButtonViewProtocol>

@property (retain, nonatomic) UILabel *groupDispatchLabel;
@property (retain, nonatomic) DUXPluralAvatar *multipleAvatars;
@property (retain, nonatomic) UIImageView *rightArrow;
@property (nonatomic) long long maxAvatarsCount;
@property (weak, nonatomic) AWEPlayInteractionBottomButtonVideoDispatchIMGroupViewModel *viewModel;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonViewDelegateProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clickAction;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
