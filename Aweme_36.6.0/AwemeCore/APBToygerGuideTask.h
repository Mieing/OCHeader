@class NSString, AFEWebGuideView;
@protocol DTFFaceViewProtocol;

@interface APBToygerGuideTask : APBToygerBaseTask <AFEWebGuideViewDelegate>

@property (retain, nonatomic) AFEWebGuideView *guideView;
@property (retain, nonatomic) id<DTFFaceViewProtocol> faceView;
@property (retain, nonatomic) NSString *suitableType;
@property (retain, nonatomic) NSString *platformInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)statusBarOrientationDidChange:(id)a0;
- (void)onButtonBegin:(BOOL)a0 query:(id)a1;
- (void)onButtonCancel:(unsigned long long)a0;
- (void)onLoadFinished:(BOOL)a0;
- (void)onH5Logger:(id)a0;
- (void)onButtonAgreement;
- (void)onSuccessGoNext;
- (void)onFailGoBack:(unsigned long long)a0;
- (void)onSoundStatusChanged:(BOOL)a0;
- (id)updateUrl:(id)a0 key:(id)a1 value:(id)a2;
- (void)invokeWithPipeInfo:(id)a0;
- (void)processEvent:(id)a0 withCompletionCallback:(id /* block */)a1;
- (void).cxx_destruct;
- (void)reset;
- (id)getConfig;

@end
