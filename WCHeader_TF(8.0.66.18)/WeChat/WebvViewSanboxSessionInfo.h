@class NSString, NSMutableDictionary, WebvViewWebComPublicLibInfo;

@interface WebvViewSanboxSessionInfo : MMObject

@property (retain, nonatomic) WebvViewWebComPublicLibInfo *sessionPublicInfo;
@property (copy, nonatomic) NSString *sanboxId;
@property (copy, nonatomic) NSString *sanboxUrl;
@property (copy, nonatomic) NSString *verifyAppId;
@property (nonatomic) BOOL hasInjectSessionOpenTagFrame;
@property (copy, nonatomic) NSString *debugConfigHost;
@property (retain, nonatomic) NSMutableDictionary *dictSandboxAppTask;
@property (retain, nonatomic) NSMutableDictionary *dictWebComInfos;
@property (nonatomic) unsigned long long performance_evalMainFrameTagsJsBeginTs;
@property (nonatomic) unsigned long long performance_evalMainFrameTagsJsEndTs;

- (id)init;
- (void)dealloc;
- (void)releaseSession;
- (void)onSessionResume;
- (id)tryGenAndGetNewSessionPublicInfo;
- (void).cxx_destruct;

@end
