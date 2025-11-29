@class NSString;

@interface IESLiveBroadcasterImp : NSObject <IESLiveIMMessageSubscriber, IESLiveBroadCasterService>

@property (nonatomic) long long livePreviewPcu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)monitorLivePcu;
- (void)messageReceived:(id)a0;

@end
