@class NSString;

@interface IESLiveIntimateChatStreamLayout : NSObject <IESLiveInteractiveStreamLayout>

@property (nonatomic) BOOL seiFieldsSimplifiedUid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateLayoutOfPublisher:(id)a0 withSessions:(id)a1 withUserService:(id)a2 mediaConfig:(id)a3;
- (id)streamRegionByLayoutRegion:(id)a0;
- (id)init;

@end
