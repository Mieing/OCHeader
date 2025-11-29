@class NSMutableDictionary, AWEIMAudioTranslateStatusObserver, AWEIMMessage, NSString, NSMutableArray;

@interface AWEIMAudioMessageTranslateManager : NSObject <IESIMAudioMessageTranslateInterface>

@property (retain, nonatomic) NSMutableDictionary *dictionaryObserver;
@property (weak, nonatomic) AWEIMAudioTranslateStatusObserver *currentTranslateObserver;
@property (retain, nonatomic) NSMutableArray *translateList;
@property (weak, nonatomic) AWEIMMessage *firstUnreadAudioMessage;
@property (nonatomic) long long translatedCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isMessageTranslateEnable:(id)a0;
+ (void)trackTranslateWithClickMethod:(id)a0;
+ (id)sharedInstance;

- (void)handleDidEnterBackgroundNotification:(id)a0;
- (void)handleAudioWillStartPlayNotification:(id)a0;
- (id)getObserverForMessageId:(id)a0 conversationId:(id)a1;
- (BOOL)findFirstUnreadAudioMessageInGroups:(id)a0;
- (void)stopTranslateAndClearAllObserver:(BOOL)a0;
- (void)appendRunningAutoTranslateListNewComeMessage:(id)a0;
- (BOOL)isTranslateFinishFlagWithMessage:(id)a0;
- (void)requestTranslateWithMessageList:(id)a0 convShortID:(id)a1 conversationID:(id)a2 conversationType:(unsigned long long)a3 needResult:(BOOL)a4 completion:(id /* block */)a5;
- (void)trackAutoTranslateWithCount:(unsigned long long)a0 failedCount:(unsigned long long)a1;
- (void)stopPlayerIfRecalledMessageIsPlaying:(id)a0;
- (void)p_requestTranslateWithParams:(id)a0 completion:(id /* block */)a1;
- (void)p_translateAudioMessageList:(id)a0 convShortID:(id)a1 convType:(unsigned long long)a2;
- (void)translateAudioMessageList:(id)a0 convShortID:(id)a1 convType:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)init;

@end
