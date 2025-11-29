@class NSArray, NSString, NSMutableSet;

@interface MMQRCodeMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate> {
    NSMutableSet *m_downloadSet;
    NSMutableSet *m_newDesignDownloadSet;
    NSMutableSet *m_revokeQRCodeSet;
    BOOL _enablePersonalQrCodeUrlAppendStyleWhenLocalGen;
}

@property (retain, nonatomic) NSArray *arrColorCodeStartColor;
@property (retain, nonatomic) NSArray *arrColorCodeEndColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initData;
- (void)dealloc;
- (id)getQRCodeImagePath:(id)a0;
- (id)getQRCodeStylePath:(id)a0;
- (id)getQRCodeConfigPath:(id)a0;
- (id)getNewDesignContactQRCodePageModePath:(id)a0;
- (id)getNewDesignContactQRCodeDominatorColorsPath:(id)a0;
- (id)getNewDesignContactQRCodeImagePath:(id)a0 type:(unsigned long long)a1;
- (id)getNewDesignContactQRCodeWithStyleImagePath:(id)a0 type:(unsigned long long)a1;
- (id)getNewDesignContactQRCodeUrlPath:(id)a0 type:(unsigned long long)a1;
- (id)getQRCodeConfig:(id)a0;
- (unsigned int)getCurStyle:(id)a0;
- (void)getQRCodeFromServer:(id)a0 withStyle:(unsigned int)a1 withOpCode:(unsigned int)a2;
- (void)p_getQRCodeFromServer:(id)a0 withStyle:(unsigned int)a1 withOpCode:(unsigned int)a2;
- (void)getOpenIMChatRoomQRCodeFromServer:(id)a0;
- (void)getQRCodeFromServer:(id)a0 withStyle:(unsigned int)a1;
- (void)refreshQRCode:(id)a0;
- (id)getQRCode:(id)a0 pullIfNotExist:(BOOL)a1;
- (BOOL)revokeChatRoomQRCode:(id)a0 qrcode:(id)a1;
- (BOOL)revokeChatRoomQRCode:(id)a0 qrcode:(id)a1 scene:(unsigned int)a2;
- (BOOL)p_revokeChatRoomQRCode:(id)a0 qrcode:(id)a1 scene:(unsigned int)a2;
- (BOOL)revokeOpenIMChatRoomQRCode:(id)a0 qrcode:(id)a1;
- (void)setHasShowRevokeTip:(id)a0 TipID:(id)a1;
- (BOOL)getChatRoomQRCodeStatus:(id)a0 arrQRCode:(id)a1;
- (void)revokeNewDesignContactQRCode:(id)a0;
- (void)getNewDesignContactQRCodeFromServer:(id)a0;
- (void)p_getNewDesignContactQRCodeFromServer:(id)a0 withOpCode:(unsigned int)a1;
- (void)p_getNewDesignContactQRCodeFromServer:(id)a0 withImageType:(unsigned long long)a1 withOpCode:(unsigned int)a2;
- (id)getNewDesignContactQRCode:(id)a0 type:(unsigned long long)a1 isChatRoom:(BOOL)a2;
- (id)getNewDesignContactQRCodeDominatorColors:(id)a0;
- (unsigned int)getCurrentNewDesignContactQRCodePageMode:(id)a0;
- (void)updateNewDesignContactQRCodePageMode:(id)a0 pageMode:(unsigned int)a1;
- (unsigned int)transformToNewDesignPageMode:(unsigned short)a0;
- (void)showQrCodeImageViewColorCode:(unsigned int)a0 targetImageViewImageView:(id)a1 image:(id)a2;
- (void)applyGradientColorLayerIntoImageView:(id)a0 image:(id)a1 startColor:(id)a2 endColor:(id)a3;
- (void)handleGetQRCodeResponse:(id)a0;
- (id)buildLocalGenPersonalQRCodeUrlWithStyle:(unsigned long long)a0 originQrCodeUrl:(id)a1;
- (long long)getPersonalQRCodeUrlStyleValue:(unsigned long long)a0;
- (void)handleGetNewDesignContactQRCodeResponse:(id)a0;
- (void)handleRevokeChatrommQRCodeResponse:(id)a0;
- (void)handleGetOpenIMChatRoomQRCodeResponse:(id)a0;
- (void)handleRevokeOpenIMChatrommQRCodeResponse:(id)a0;
- (void)handleGetChatRoomQRCodeStatusResponse:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (BOOL)shouldUseQBarSDK;
- (id)localGenPersonalQRCodeDominatorColor:(id)a0;
- (void)genAndSaveChatRoomQRCodeImage:(id)a0 url:(id)a1 serverReturnedImageData:(id)a2;
- (BOOL)enablePersonalQrCodeUrlAppendStyleWhenLocalGen;
- (void)genAndSavePersonalQRCodeImage:(id)a0 url:(id)a1;
- (void)genAndSavePersonalQrCdoeImage:(id)a0 type:(unsigned long long)a1 url:(id)a2;
- (void)genAndSaveQRCodeImage:(id)a0 type:(unsigned long long)a1 url:(id)a2 isChatRoom:(BOOL)a3;
- (id)localGenQRCodeImage:(id)a0 type:(unsigned long long)a1 url:(id)a2;
- (int)getEcLevelForUrl:(id)a0;
- (struct QBarImageInfo { char *x0; int x1; int x2; int x3; })getQBarImageInfoForUIImage:(id)a0;
- (void)freePersonalParam:(struct PersonalParam { struct QBarImageInfo { char *x0; int x1; int x2; int x3; } x0; struct QBarImageInfo { char *x0; int x1; int x2; int x3; } x1; struct QBarImageInfo { char *x0; int x1; int x2; int x3; } x2; struct QBarImageInfo { char *x0; int x1; int x2; int x3; } x3; struct QBarImageInfo { char *x0; int x1; int x2; int x3; } x4; struct QBarImageInfo { char *x0; int x1; int x2; int x3; } x5; int x6; struct QBarImageInfo { char *x0; int x1; int x2; int x3; } x7; BOOL x8; })a0;
- (void)freeQBarImageInfo:(struct QBarImageInfo { char *x0; int x1; int x2; int x3; })a0;
- (void)setPersonalQRCodeUrl:(id)a0;
- (id)getPersonalQRCodeUrl;
- (id)getPersonalQRCodeUrlMMKVID;
- (void).cxx_destruct;

@end
