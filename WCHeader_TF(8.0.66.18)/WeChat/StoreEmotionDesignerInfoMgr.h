@class NSString, NSMutableDictionary;

@interface StoreEmotionDesignerInfoMgr : MMUserService <StoreEmotionGetDesignerSimpleInfoCgiDelegate, StoreEmotionGetEmotionActivityCgiDelegate, StoreEmoticonGetDesignerAcctInfoCgiDelegate, MMServiceProtocol> {
    NSMutableDictionary *m_getDesignerSimpleInfoCgiDic;
}

@property (retain, nonatomic) NSMutableDictionary *designerIdDecodeDic;
@property (retain, nonatomic) NSMutableDictionary *getDesignerAcctInfoCgiDic;
@property (retain, nonatomic) NSMutableDictionary *getDesignerBlockDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)askForDesignerForDesignerId:(id)a0;
- (void)askForDesignerForDesignerId:(id)a0 isForced:(BOOL)a1;
- (void)askForDesignerForDesignerId:(id)a0 isForced:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)askForDesignerWithDesignerUin:(unsigned int)a0;
- (void)askForDesignerWithDesignerUin:(unsigned int)a0 isForced:(BOOL)a1;
- (void)askForDesignerWithDesignerUin:(unsigned int)a0 isForced:(BOOL)a1 completionBlock:(id /* block */)a2;
- (id)getDesignerWithDesignerId:(id)a0;
- (id)getDesignerWithDesignerUin:(unsigned int)a0;
- (BOOL)updateDesignerInfo:(id)a0;
- (BOOL)updateDesignerInfo:(id)a0 AndneedCallExt:(BOOL)a1;
- (void)askForActivityForActivityId:(id)a0 md5:(id)a1 linkId:(id)a2;
- (id)askCacheForActivity:(id)a0;
- (id)askCacheForLink:(id)a0 md5:(id)a1;
- (BOOL)isActivityDegradedFor:(id)a0;
- (id)loadDesignerIdDecodeDic;
- (void)saveDesignerIdDecoderDic:(id)a0;
- (void)askForDesignerUseCgiForDesignerId:(id)a0;
- (void)askForDesignerUseCgiWithDesignerUin:(unsigned int)a0;
- (void)onGetDesignerSimpleInfoCgiOkWithDesignerId:(id)a0 PersonalDesigner:(id)a1;
- (void)onGetDesignerSimpleInfoCgiOkWithDesignerId:(id)a0 previewEmotion:(id)a1 previewEmoji:(id)a2;
- (void)onGetDesignerSimpleInfoCgiFailedWithDesignerId:(id)a0;
- (void)onGetEmotionActivityCgiFinished:(id)a0 activity:(id)a1 link:(id)a2;
- (void)onGetDesignerAcctInfoFailWithDeisignerUin:(unsigned int)a0;
- (void)onGetDesignerAcctInfoOKWithDeisignerUin:(unsigned int)a0 PersonalDesigner:(id)a1;
- (void)onGetDesignerAcctInfoFailWithDesignerId:(id)a0;
- (void)onGetDesignerAcctInfoOKWithDesignerId:(id)a0 PersonalDesigner:(id)a1;
- (void).cxx_destruct;

@end
