@class NSString;

@interface IESLiveGameCPExplainCardFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber>

@property (nonatomic) BOOL hasRequestExplainCardInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)setupObserver;
- (id)explainCardInterface;
- (BOOL)shouldHandleExplainCardEvent;
- (id)convertExplainCardNoticeModelWithMessage:(id)a0;
- (void)messageReceived:(id)a0;

@end
