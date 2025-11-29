@class NSString, PasskeyGuideCreateConfig;

@interface PasskeyGuideCreatePageSheet : MMAutoLayoutSheetView <MMPageSheetBottomViewDelegate, ILinkEventExt>

@property (retain, nonatomic) PasskeyGuideCreateConfig *m_config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfig:(id)a0;
- (void)customArrangeViews;
- (void)pageSheetDidClose:(BOOL)a0;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (void).cxx_destruct;

@end
