@class NSString;
@protocol GameLifeBlackHalfViewControllerDelegate;

@interface GameLifeHalfScreenView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate> {
    BOOL _isBlack;
    BOOL _isAssociateWithWxGame;
    BOOL _userDisAssociateWithWxGame;
}

@property (weak, nonatomic) id<GameLifeBlackHalfViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDetail:(unsigned int)a0 isBlack:(BOOL)a1 isAssociate:(BOOL)a2;
- (void)addDetailView:(unsigned int)a0 isBlack:(BOOL)a1 isAssociate:(BOOL)a2;
- (void)toggleButton:(id)a0;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)colorForPageSheetConfirmButton;
- (id)colorForPageSheetCancelButton;
- (void).cxx_destruct;

@end
