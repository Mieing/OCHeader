@class NSString;

@interface LSIMToolServiceImpl : NSObject <LSIMToolService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)formatedNumber:(long long)a0;
- (long long)currentServerTime;
- (id)lane;
- (BOOL)isSaaS;
- (BOOL)enablePPE;
- (BOOL)pasteboardSetText:(id)a0;
- (void)calculateFMPForView:(id)a0 startTime:(double)a1 completion:(id /* block */)a2;
- (BOOL)enableBOE;
- (BOOL)networkGuideEnable;
- (void)openNetworkGuide;
- (id)parseEmoticonsWithAttributedString:(id)a0 font:(id)a1 emojiSize:(struct CGSize { double x0; double x1; })a2;
- (id)agreementServerHost;
- (id)pigeonCustomHeader;
- (id)pigeonCustomConfig;
- (void)markAsReadToNoticeServer:(id)a0 completion:(id /* block */)a1;
- (id)convertTimeStampToTextForChatList:(double)a0;
- (id)convertTimeStampToTextForMessage:(double)a0;
- (void)transferPrivacyURL:(id)a0;

@end
