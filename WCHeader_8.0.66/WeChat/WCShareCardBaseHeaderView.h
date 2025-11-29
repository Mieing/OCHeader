@class UrlLabel, WCCardDataCardInfo, WCCardDataCardTPInfo, NSString, UIButton;
@protocol WCCardDataSource, WCShareCardBaseCardHeaderDelegate;

@interface WCShareCardBaseHeaderView : MMUIView <ILinkEventExt>

@property (retain, nonatomic) UIButton *acceptCardBtn;
@property (retain, nonatomic) UrlLabel *guidanceLabel;
@property (retain, nonatomic) id<WCCardDataSource> cardDataSource;
@property (weak, nonatomic) id<WCShareCardBaseCardHeaderDelegate> baseDelegate;
@property (retain, nonatomic) WCCardDataCardInfo *cardInfo;
@property (retain, nonatomic) WCCardDataCardTPInfo *cardTPInfo;
@property (nonatomic) int cardStatus;
@property (retain, nonatomic) NSString *cardStatusTitle;
@property (nonatomic) BOOL bIsShareCard;
@property (nonatomic) BOOL bIsNeedHideAcceptBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCardSourceData:(id)a0 isShareCard:(BOOL)a1 cardStatus:(int)a2 isNeedHideAccecptBtn:(BOOL)a3 delegate:(id)a4;
- (void)initBaseData;
- (id)genCardStatusNotNormalBtnView;
- (id)getInvalidAcceptBtnTitleIfExist;
- (void)genAcceptBtnAreaWithCardContentBottm:(double)a0;
- (BOOL)isHasAcceptedBtn;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getApplyBtnFrame;
- (double)getRealHeight;
- (void)onShareCardAction;
- (void)acceptMyCard:(id)a0;
- (void)onLinkClicked:(id)a0 backupUrl:(id)a1 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void).cxx_destruct;

@end
