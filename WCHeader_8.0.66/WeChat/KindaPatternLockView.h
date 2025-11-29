@class MMKPatternLockViewOnInputInvalidPatternCallback, NSString, MMKPatternLockViewEndWithPatternCallback, MMPatternLockView;

@interface KindaPatternLockView : KindaView <MMPatternLockViewDelegate, MMKPatternLockView>

@property (retain, nonatomic) MMPatternLockView *lockView;
@property (retain, nonatomic) MMKPatternLockViewEndWithPatternCallback *callback;
@property (retain, nonatomic) MMKPatternLockViewOnInputInvalidPatternCallback *invalidInputCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getView;
- (int)getViewWidth;
- (int)getViewHeight;
- (void)onVerifyPatternOK;
- (void)onVerifyPatternFail;
- (void)resetPatternView;
- (void)setEnableInput:(BOOL)a0;
- (void)setEndWithPatternCallback:(id)a0;
- (void)setOnInputInvalidPatternCallback:(id)a0;
- (void)lockView:(id)a0 didEndWithPattern:(id)a1;
- (BOOL)isContinueWhenlockViewResultInValid:(id)a0;
- (void).cxx_destruct;

@end
