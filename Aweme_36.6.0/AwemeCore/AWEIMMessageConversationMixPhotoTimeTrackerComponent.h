@class NSString, NSMutableDictionary;

@interface AWEIMMessageConversationMixPhotoTimeTrackerComponent : AWEIMComponentBase <AWEIMMixPhotoStartOrJoinSuccessMessage, AWEIMMessageDataEventProtocol>

@property (retain, nonatomic) NSMutableDictionary *clientTimeStampInfoDict;
@property (retain, nonatomic) NSMutableDictionary *serverTimeStampInfoDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (id)vcParent;
- (void)onMixImageMessageUpdated:(id)a0;
- (void)onStartOrJoinMixPhoto:(id)a0;
- (void)tryMatchClientTimeStampInfoWithServerTimeStampInfo:(id)a0;
- (void)tryMatchServerTimeStampInfoWithClientTimeStampInfo:(id)a0;
- (id)stringOfActionType:(long long)a0;
- (void)trackPushDurationWithContext:(id)a0;
- (void).cxx_destruct;
- (id)conversation;
- (void)dealloc;

@end
