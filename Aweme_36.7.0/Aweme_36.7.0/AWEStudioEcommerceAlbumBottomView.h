@class UIButton, UILabel, NSString;

@interface AWEStudioEcommerceAlbumBottomView : UIView <ACCSelectedAssetsBottomViewProtocol>

@property (retain, nonatomic) UIButton *overlayButton;
@property (retain, nonatomic) UIButton *nextButton;
@property (retain, nonatomic) UIButton *finishButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) NSString *shootWay;
@property (nonatomic) BOOL doAnimation;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateStateWith:(BOOL)a0;
- (void)makeConstraint;
- (void)clickFinish;
- (void)clickBtnDisable;
- (void)updateBtnState:(BOOL)a0;
- (void)hideAllBtn;
- (void).cxx_destruct;
- (id)init;

@end
