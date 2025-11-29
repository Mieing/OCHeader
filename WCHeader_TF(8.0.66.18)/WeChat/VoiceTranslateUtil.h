@interface VoiceTranslateUtil : NSObject

+ (id)getVoiceIDFromMsg:(id)a0;

- (id)getTransInfoIDFromMsg:(id)a0;
- (id)getSessionInfoPathWithUserName:(id)a0;
- (id)getUserTranslateRootDir;
- (id)pathForTranslateResult:(id)a0;
- (BOOL)isLocalTransResultExist:(id)a0;
- (id)getTranslateString:(id)a0;

@end
