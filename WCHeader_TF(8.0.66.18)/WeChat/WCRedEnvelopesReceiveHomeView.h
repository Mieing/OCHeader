@class WCRedEnvelopesControlData, NSString, UIView, MMWebImageView, UIImageView, UIButton, HongbaoReceiveHomeViewAbtestObject, MMEmoticonView, NSDictionary, ContactUpdateHelper, WCPayWebImageView, WCRedEnvelopesReceiveHomePromotionView;
@protocol WCRedEnvelopesReceiveHomeViewDelegate;

@interface WCRedEnvelopesReceiveHomeView : MMUIView <WCRedEnvelopesReceiveHomePromotionViewDelegate, PAGViewListener, WCPayWebPagViewDelegate> {
    id<WCRedEnvelopesReceiveHomeViewDelegate> m_delegate;
    UIImageView *m_backgroundView;
    UIImageView *m_backgroundMaskView;
    UIButton *openRedEnvelopesButton;
    UIImageView *openAnimationImageView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } m_frame;
    NSDictionary *m_dicBaseInfo;
    WCRedEnvelopesControlData *m_data;
    BOOL m_bSuccessAnmation;
    BOOL m_bCloseAnimation;
    UIView *oRedView;
    UIView *oTopHeaderView;
    UIView *imageView;
    UIButton *cancel2Button;
    MMWebImageView *maskImageView;
}

@property (retain, nonatomic) ContactUpdateHelper *m_nickNameHelper;
@property (retain, nonatomic) ContactUpdateHelper *m_successOpenNickNameHelper;
@property (retain, nonatomic) MMEmoticonView *emoticonView;
@property (retain, nonatomic) UIImageView *emoticonBkgImgView;
@property (retain, nonatomic) UIImageView *loadingImgView;
@property (retain, nonatomic) UIImageView *nicknameBkgView;
@property (retain, nonatomic) UIImageView *descTitleBkgView;
@property (retain, nonatomic) WCPayWebImageView *corpImageView;
@property (retain, nonatomic) WCRedEnvelopesReceiveHomePromotionView *promotionView;
@property (retain, nonatomic) UIImageView *promotionMaskView;
@property (nonatomic) BOOL isPromotionViewShowing;
@property (retain, nonatomic) HongbaoReceiveHomeViewAbtestObject *abtestObject;
@property (nonatomic) unsigned int enterTimestamp;
@property (nonatomic) BOOL isPreviewMode;
@property (nonatomic) BOOL isExpireViewMode;
@property (nonatomic) BOOL isLiveMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)refreshViewWithData:(id)a0;
- (BOOL)shouldShowBottomDescriptionWithType:(unsigned long long)a0 envelopeStutus:(unsigned long long)a1;
- (BOOL)shouldShowDetailButtonWithIsSender:(BOOL)a0 Type:(unsigned long long)a1 ReceiveStutus:(unsigned long long)a2 envelopeStutus:(unsigned long long)a3 data:(id)a4;
- (void)initAbtestObject;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andData:(id)a1 delegate:(id)a2;
- (BOOL)accessibilityPerformEscape;
- (void)OnCancelButtonDone;
- (void)OnOpenList;
- (void)OnOpenRedEnvelopes;
- (void)reportLocationAndWifi;
- (void)startReceiveAnimation;
- (void)stopReceiveAnimation;
- (void)showAnimation;
- (void)endAnimation;
- (void)removeView;
- (void)showSuccessOpenAnimation;
- (id)convertToImage:(id)a0;
- (BOOL)hasEmoticon;
- (BOOL)hasRedSkin;
- (id)generateMaskImage:(id)a0;
- (id)cropImage:(id)a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)creatImageWithMaskImage:(id)a0 andBackimage:(id)a1;
- (void)showPromotionView:(id)a0;
- (void)onClickProtomotionView:(id)a0;
- (BOOL)hasSkinWidget;
- (BOOL)hasPagSkinWidget;
- (void)onLoadWCPayWebPagOK:(id)a0;
- (double)getTopCurveBottomY;
- (void).cxx_destruct;

@end
