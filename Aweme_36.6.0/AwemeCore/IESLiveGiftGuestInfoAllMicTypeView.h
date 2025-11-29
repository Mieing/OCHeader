@class IESLiveGiftRecipientSectionViewModel;

@interface IESLiveGiftGuestInfoAllMicTypeView : UIView <IESLiveGiftGuestInfoContentViewProtocol>

@property (retain, nonatomic) IESLiveGiftRecipientSectionViewModel *viewModel;

+ (BOOL)shouldShowWithViewModel:(id)a0;

- (id)diyAvatarMaskLayer;
- (void)setUp;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)prepareForReuse;

@end
