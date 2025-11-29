@class NSString;

@interface WeAppCore.MagicAdMiniProgramService : NSObject <WeAppCore.IMagicAdMiniProgramService, IMagicCardStarterDelegate> {
    void /* unknown type, empty encoding */ mbBizHandle;
    void /* unknown type, empty encoding */ mAppId;
    void /* unknown type, empty encoding */ magicAdMiniProgramCallback;
    void /* unknown type, empty encoding */ systemCoverView;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_mMBAdContainer;
}

@property (class, nonatomic, readonly) NSString *BIZ_NAME_MAGIC_AD_MINI_PROGRAM;

- (void)prepareWithAppId:(id)a0;
- (void)resumeWithViewController:(id)a0;
- (void)pause;
- (void)destroy;
- (void)setupMagicAdMiniProgramCallbackWithCallback:(id)a0;
- (void)sendEventToMBBizWithBizName:(id)a0 event:(id)a1 data:(id)a2;
- (void)jsApiEventHandler:(id)a0 extraInfo:(id)a1 callback:(id /* block */)a2;
- (void)notifyBizDestroy;
- (void)notifyFrameSetDestroy:(id)a0;
- (void)notifyFrameSetFirstFrameRendered:(id)a0;
- (void)notifyFrameSetSizeChange:(id)a0 height:(long long)a1;
- (void)createFrameSetForCoverView:(id)a0 callback:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;

@end
