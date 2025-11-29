@class NSString;

@interface PreEnterCommonLiteAppGuidanceStep : PreEnterBaseStep <MMWebViewDelegate>

@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *page;
@property (nonatomic) int timeout;
@property (retain, nonatomic) NSString *scene;
@property (nonatomic) int escapeChoise;
@property (nonatomic) BOOL needSyncEscape;
@property (nonatomic) BOOL isValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMsg:(id)a0;
- (id)stepId;
- (void)parseXmlString:(id)a0;
- (void)startStep;
- (void)escapeGuidance;
- (void)onWebViewCloseAndGoNext:(id)a0 webVC:(id)a1 customClose:(BOOL *)a2;
- (void).cxx_destruct;

@end
