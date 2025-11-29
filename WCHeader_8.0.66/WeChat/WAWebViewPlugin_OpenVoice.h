@class NSString;

@interface WAWebViewPlugin_OpenVoice : WAWebViewPlugin_embedView <MMOpenVoiceVideoViewDelegate> {
    BOOL _statusBarHidden;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _webViewFrame;
    BOOL _tabBarVisible;
    struct CGPoint { double x; double y; } _contentOffset;
    long long _contentInsetAdjustmentBehavior;
    BOOL _statusBarBlack;
    BOOL _scrollEnabled;
}

@property (nonatomic) unsigned int currentFullScrennViewID;
@property (nonatomic) BOOL isRunningInSheetModeBeforeFullScreen;
@property (nonatomic) BOOL isInVideoFullScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)getOrientationByDirection:(long long)a0;

- (id)init;
- (void)dealloc;
- (BOOL)handleEvent:(unsigned long long)a0 userInfo:(id)a1;
- (void)insertView:(id)a0 callback:(id /* block */)a1;
- (void)updateView:(id)a0 callback:(id /* block */)a1;
- (void)removeView:(id)a0 callback:(id /* block */)a1;
- (void)requestFullScreen:(id)a0 callback:(id /* block */)a1;
- (void)exitFullScreen:(id)a0 callback:(id /* block */)a1;
- (void)enableFullScreen:(BOOL)a0 orientation:(long long)a1 caller:(id)a2;
- (id)getWAVCBy:(id)a0;
- (long long)forceInterfaceOrientationBy:(id)a0;

@end
