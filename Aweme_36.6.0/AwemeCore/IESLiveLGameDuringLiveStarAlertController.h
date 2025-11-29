@class NSString, NSDictionary, IESLiveLGameDuringLiveModel, IESLivePopupItem;
@protocol IESLiveLGameDuringLiveStarAlertControllerDelegate;

@interface IESLiveLGameDuringLiveStarAlertController : IESLiveLGameMaskController <IESLiveLGameDuringLiveStarAlertViewDelegate>

@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) IESLivePopupItem *popupItem;
@property (copy, nonatomic) NSString *gameSource;
@property (copy, nonatomic) NSDictionary *data;
@property (nonatomic) long long type;
@property (retain, nonatomic) IESLiveLGameDuringLiveModel *duringLiveModel;
@property (weak, nonatomic) id<IESLiveLGameDuringLiveStarAlertControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeControllerWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithType:(long long)a0 desc:(id)a1;
- (void)showControllerWithCompletion:(id /* block */)a0;
- (void)onClickCancelButton:(id)a0;
- (void)onClickActionButton:(id)a0;
- (void)willClickCheckButton:(id)a0 isCheck:(BOOL)a1;
- (void)onClickLink:(id)a0 url:(id)a1;
- (void)onClickBlankArea:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
