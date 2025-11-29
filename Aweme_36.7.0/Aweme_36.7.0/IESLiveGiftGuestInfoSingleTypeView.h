@class IESLiveGiftRecipientSectionViewModel;

@interface IESLiveGiftGuestInfoSingleTypeView : UIView <IESLiveGiftGuestInfoContentViewProtocol>

@property (retain, nonatomic) IESLiveGiftRecipientSectionViewModel *viewModel;

+ (BOOL)shouldShowWithViewModel:(id)a0;

- (void)setUp;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)prepareForReuse;

@end
