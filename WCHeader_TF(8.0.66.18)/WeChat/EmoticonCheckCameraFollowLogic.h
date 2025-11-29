@class StoreEmotionExchangeEmotionPackCgi, NSString;

@interface EmoticonCheckCameraFollowLogic : NSObject <StoreEmotionExchangeEmotionPackCgiDelegate>

@property (retain, nonatomic) StoreEmotionExchangeEmotionPackCgi *exchangePackCgi;
@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) NSString *emoticonMd5;
@property (retain, nonatomic) NSString *loadingText;
@property (copy, nonatomic) id /* block */ getVcBlock;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldCheck:(id)a0;

- (void)startCheck:(id)a0 emoticonMd5:(id)a1 getVcBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)showComfirmTipsWithWording:(id)a0;
- (void)onExchangeEmotionPackCgiOkWithPid:(id)a0 DownloadInfo:(id)a1;
- (void)onExchangeEmotionPackCgiFailedForNoResponseWithPid:(id)a0;
- (void)onExchangeEmotionPackCgiFailedWithPid:(id)a0 AndRet:(int)a1 ErroMsg:(id)a2;
- (void).cxx_destruct;

@end
