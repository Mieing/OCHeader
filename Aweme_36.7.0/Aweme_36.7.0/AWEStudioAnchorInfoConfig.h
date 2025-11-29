@class NSString;

@interface AWEStudioAnchorInfoConfig : NSObject <AWEStudioAnchorInfoConfigService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)appendMusicRotaryButtnAnchorParams:(id)a0;
- (id)readStudioAnchorSetInfoWithParams:(id)a0 businessType:(long long)a1;
- (id)jsonStringEncoded:(id)a0;
- (id)musicRotaryAnchor_common:(id)a0;
- (id)musicRotaryAnchor_mvtemplate:(id)a0;
- (id)musicRotaryAnchor_contentSourceStr:(id)a0;
- (id)musicRotaryAnchor_customPropInfo:(id)a0;
- (id)musicRotaryAnchor_referenceTtsOrVoiceIdList:(id)a0;
- (BOOL)checkABTestOpenWithBusinessTypeIfNeed:(long long)a0;
- (id)convertkeyWithBusinessType:(long long)a0;

@end
