@class KindaRichLabelViewV2, RoundTextViewData, NSString;

@interface WCPayRoundTextViewDataView : UIView <WCPayVoidCallbackDelegate>

@property (retain) KindaRichLabelViewV2 *m_text;
@property (retain) RoundTextViewData *m_viewData;
@property double m_maxWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewData:(id)a0 maxWidth:(double)a1;
- (void)layoutSubviews;
- (void)updateView;
- (void)updateText;
- (void)onWCPayVoidCallbackWithUserInfo:(id)a0;
- (void).cxx_destruct;

@end
