@class NSString, MMUILabel;

@interface MMStorageAlertHalfView : MMPageSheetBaseView <ILinkEventExt, KindaNotifyExt> {
    MMUILabel *m_titleLabel;
    float wechatRatio;
    BOOL noTotalSize;
    BOOL appeared;
}

@property (retain, nonatomic) NSString *disableThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDisableThreshold:(id)a0;
- (void)setupView;
- (void)setUiLabelAutoNewLine:(id)a0;
- (void)goToCleanView:(id)a0;
- (void)pageSheetWillAppear;
- (void)pageSheetDidAppear;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidDisappear;
- (void)onAppEnterForeground:(id)a0;
- (void)checkCleanSucc;
- (void)handleDoubleTap:(id)a0;
- (void)reportStorageAlert:(int)a0 num:(unsigned long long)a1;
- (void)dealloc;
- (void)onKindaNotify:(id)a0 value:(id)a1;
- (void).cxx_destruct;

@end
