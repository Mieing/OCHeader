@class NSString, NSMutableSet;

@interface AWEIMMessageLiveGroupAnnouncementEntryInteractor : AWEIMComponentBase <AWEIMMessageLiveGroupAnnouncementEntryInteractorInterface>

@property (retain, nonatomic) NSMutableSet *requestedSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interactorForConversationId:(id)a0;
+ (BOOL)enableLiveGroupAnnouncementInteractor:(id)a0;
+ (id)tableForInteractor;
+ (BOOL)canCreateComponentWithContext:(id)a0;
+ (id)sharedInstance;

- (void)componentDidMounted:(id)a0;
- (void)didFetchDataForMessageId:(id)a0;
- (BOOL)hasFetchedDataForMessageId:(id)a0;
- (id)vcParent;
- (BOOL)canShowLiveGroupAnnouncementEntryWithConversation:(id)a0;
- (BOOL)tryShowLiveGroupAnnouncementBubbleWithCon:(id)a0 anchorView:(id)a1;
- (void).cxx_destruct;
- (id)view;

@end
