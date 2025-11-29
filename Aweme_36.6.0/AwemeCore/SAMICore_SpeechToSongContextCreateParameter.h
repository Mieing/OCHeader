@interface SAMICore_SpeechToSongContextCreateParameter : SAMICore_ServerContextCreateParameter

@property (nonatomic) const char *audioUrl;
@property (nonatomic) const char *audioUrlType;
@property (nonatomic) const char *authPolicyHeader;
@property (nonatomic) int responseType;
@property (nonatomic) int videoStatus;
@property (nonatomic) const char *extra;

@end
