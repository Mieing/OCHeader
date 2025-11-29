@class UIView, NSString, WCPayBadgeView, WCPayBankLogoView, UILabel, UIImageView, UIButton, WCPayNetImageResource, WCPayBindCardInfo;
@protocol WCPayCardDetailViewDelegate;

@interface WCPayCardDetailView : UIButton <WCPayLogicMgrExt> {
    WCPayBindCardInfo *m_info;
    UILabel *bankTypeLabel;
}

@property (weak, nonatomic) id<WCPayCardDetailViewDelegate> delegate;
@property (retain, nonatomic) WCPayNetImageResource *m_waterMaskImage;
@property (retain, nonatomic) WCPayNetImageResource *m_backgroundImage;
@property (retain, nonatomic) WCPayNetImageResource *m_bankLogoImage;
@property (retain, nonatomic) UIImageView *backView;
@property (retain, nonatomic) UIImageView *waterMaskView;
@property (retain, nonatomic) WCPayBankLogoView *logoView;
@property (retain, nonatomic) UIView *bankNoView;
@property (retain, nonatomic) UIView *bottomArea;
@property (retain, nonatomic) WCPayBadgeView *m_invalidView;
@property (retain, nonatomic) UIButton *coverBtn;
@property (nonatomic) BOOL needUpdateResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getBackGroundImage:(id)a0;
- (void)GetAboutAllImage;
- (void)SaveAndShowWaterMaskImage:(id)a0;
- (void)updateWaterMaskImage:(id)a0;
- (void)layoutLogoView:(id)a0;
- (void)SaveAndShowBackGroundImage:(id)a0;
- (void)updateBackgroundImage:(id)a0;
- (void)SaveAndShowBankLogoImage:(id)a0;
- (void)updateLogoImage:(id)a0;
- (void)OnSuccessGetBankPackage:(id)a0;
- (void)OnSuccessGetBankResources:(id)a0;
- (void)OnGetBankPackage:(id)a0 Error:(id)a1;
- (void)OnGetBankResources:(id)a0 Error:(id)a1;
- (void)initViewWithBindCardInfo:(id)a0 Data:(id)a1;
- (void)coverBtnClick;
- (BOOL)isShowECardMangeArea;
- (id)initWithBindCardInfo:(id)a0 Data:(id)a1 delegate:(id)a2;
- (void)dealloc;
- (void)CancelPerformGetData;
- (id)getInfo;
- (void)OnGetBankResourcesNotification:(id)a0;
- (double)waterMaskHeight;
- (double)cardBackHeight;
- (void).cxx_destruct;

@end
