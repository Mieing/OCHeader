@class NSString, WCPayNetImageResource;

@interface WCPayBankLogoView : UIImageView

@property (retain, nonatomic) NSString *m_bankType;
@property (retain, nonatomic) WCPayNetImageResource *m_bankLogoImage;

- (void)initViewWithBankType:(id)a0 Frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 WithBankType:(id)a1;
- (void)dealloc;
- (void)UpdateImage:(id)a0;
- (void)loadCacheImage;
- (void)OnSuccessGetBankResources:(id)a0;
- (void)SaveAndShowBankLogoImage:(id)a0;
- (void)OnGetBankResourcesNotification:(id)a0;
- (void).cxx_destruct;

@end
