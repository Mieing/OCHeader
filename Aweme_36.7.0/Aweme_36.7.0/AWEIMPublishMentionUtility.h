@class NSString;

@interface AWEIMPublishMentionUtility : NSObject <IESIMPublishMentionInterface>

@property (nonatomic) unsigned long long globalStatusCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;

- (unsigned long long)globalStatusCount;
- (void)setGlobalStatusCount:(unsigned long long)a0;
- (BOOL)shouldShowPokeButtonWithChat:(id)a0;
- (void)exitPokeLightInteractionCoreWithChat:(id)a0;
- (BOOL)isMentionFeedCardMessageWithMessage:(id)a0;
- (void)exitPokeLightInteractionCoreWithConversation:(id)a0;
- (void)increaseGlobalStatusCount;
- (id)titleStringWithMessage:(id)a0;
- (BOOL)shouldTrackPokeLightInteractionWithMessage:(id)a0;

@end
