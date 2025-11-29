@class NSArray, IESLiveGiftRecipientSectionViewModel;

@interface IESLiveGiftGuestInfoMultiTypeView : UIView <IESLiveGiftGuestInfoContentViewProtocol>

@property (retain, nonatomic) IESLiveGiftRecipientSectionViewModel *viewModel;
@property (retain, nonatomic) NSArray *avatarViewLists;

+ (BOOL)shouldShowWithViewModel:(id)a0;

- (void)setUp;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)prepareForReuse;

@end
