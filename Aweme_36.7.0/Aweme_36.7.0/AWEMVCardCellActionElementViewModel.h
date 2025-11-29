@protocol AWEAwemePlayInteractionInteractorProtocol;

@interface AWEMVCardCellActionElementViewModel : AWEDCFeedBaseCellElementViewModel

@property (retain, nonatomic) id<AWEAwemePlayInteractionInteractorProtocol> interactor;

- (id)enterFrom;
- (void)refreshWithAwemeModel:(id)a0;
- (void)didTapDiggButton:(id)a0;
- (void)didTapUserInfo;
- (void).cxx_destruct;

@end
