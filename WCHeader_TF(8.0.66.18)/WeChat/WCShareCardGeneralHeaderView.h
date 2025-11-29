@protocol WCShareCardGeneralCardHeaderDelegate;

@interface WCShareCardGeneralHeaderView : WCShareCardGeneralHeaderViewV2

@property (nonatomic) BOOL bIsShowUseCodeBtn;
@property (nonatomic) BOOL bIsIphone5ShareCardMode;
@property (weak, nonatomic) id<WCShareCardGeneralCardHeaderDelegate> delegate;

- (id)initWithViewWidth:(double)a0 withCardSourceData:(id)a1 isShareCard:(BOOL)a2 isGiftFromUserHeaderView:(BOOL)a3 isShowUseCodeBtn:(BOOL)a4 isIphone5ShareCardMode:(BOOL)a5 cardStatus:(int)a6 isNeedHideAccecptBtn:(BOOL)a7 delegate:(id)a8;
- (void)initView;
- (void)initGeneralCardContentViewWithStartY:(double)a0;
- (double)initSubViewWhenHasLimitFieldWithTitleBottom:(double)a0;
- (double)initSubViewWhenHasOperateFieldWithTitleBottom:(double)a0;
- (double)initSubViewWhenHasNoOperateFieldWithTitleBottom:(double)a0;
- (double)logoLen;
- (id)getLogoName;
- (BOOL)hasOperateField;
- (BOOL)hasLimitField;
- (void)onClickApplyBtn:(id)a0;
- (void)onClickOperationBtn:(id)a0;
- (double)getRealHeight;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getApplyBtnFrame;

@end
