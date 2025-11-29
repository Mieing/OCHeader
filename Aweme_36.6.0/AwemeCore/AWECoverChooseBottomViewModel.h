@class NSString, AWECoverTextEffectCellModel;

@interface AWECoverChooseBottomViewModel : NSObject

@property (retain, nonatomic) AWECoverTextEffectCellModel *currentEffectModel;
@property (retain, nonatomic) AWECoverTextEffectCellModel *selectedEffectModel;
@property (retain, nonatomic) NSString *currentTitle;
@property (retain, nonatomic) NSString *selectedTitle;

- (void)selectTitle:(id)a0;
- (void)updateEffectModel:(id)a0;
- (BOOL)shouldHideResetButton;
- (void)selectEffectModel:(id)a0;
- (void).cxx_destruct;
- (void)updateTitle:(id)a0;

@end
