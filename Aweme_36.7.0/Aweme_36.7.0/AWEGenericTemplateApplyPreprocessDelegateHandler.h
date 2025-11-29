@protocol NPPreprocessTTSDelegateProtocol_OC, NPPreprocessCustomInfoDelegateProtocol_OC, NPPreprocessTextParamDelegateProtocol_OC, NPPreprocessAIGCDelegateProtocol_OC, NPDynamicTemplateDelegate_OC;

@interface AWEGenericTemplateApplyPreprocessDelegateHandler : AWEGenericTemplateApplyBaseHandler

@property (weak, nonatomic) id<NPPreprocessAIGCDelegateProtocol_OC> aigcDelegate;
@property (weak, nonatomic) id<NPPreprocessCustomInfoDelegateProtocol_OC> customInfoDelegate;
@property (weak, nonatomic) id<NPPreprocessTTSDelegateProtocol_OC> ttsDelegate;
@property (weak, nonatomic) id<NPDynamicTemplateDelegate_OC> musicBeatsDelegate;
@property (weak, nonatomic) id<NPPreprocessTextParamDelegateProtocol_OC> textParamDelegate;

- (void)onWillApplyTemplate:(id)a0 config:(id)a1 targetModel:(id)a2 preprocessParams:(id)a3;
- (void)setAIGCPreprocessDelegate:(id)a0 config:(id)a1 targetModel:(id)a2 preprocessParams:(id)a3;
- (void)setCustomInfoPreprocessDelegate:(id)a0 config:(id)a1 targetModel:(id)a2 preprocessParams:(id)a3;
- (void)setTTSPreprocessDelegate:(id)a0 config:(id)a1 targetModel:(id)a2 preprocessParams:(id)a3;
- (void)setMusicBeatsPreprocessDelegate:(id)a0 config:(id)a1 targetModel:(id)a2 preprocessParams:(id)a3;
- (void)setTextParamPreprocessDelegate:(id)a0 config:(id)a1 targetModel:(id)a2 preprocessParams:(id)a3;
- (void).cxx_destruct;

@end
