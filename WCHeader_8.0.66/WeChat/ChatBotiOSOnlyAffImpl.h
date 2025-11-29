@class NSString;

@interface ChatBotiOSOnlyAffImpl : NSObject <ChatbotiOSOnlyCPP2NativeCallerBase>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCallback:(id)a0;
- (void)onRecvVoIPAsrInfoAsync:(unsigned long long)a0 asrInfo:(id)a1 roomID:(unsigned long long)a2;
- (void)onRecvToCliInfoAsync:(unsigned long long)a0 data:(id)a1 roomID:(unsigned long long)a2 openScene:(int)a3;

@end
