@class NSString;

@interface IESLiveBroadcasterByteLinkImp : NSObject <IESLiveIMMessageSubscriber, IESLiveBroadCasterByteLinkService>

@property (nonatomic) long long pcuLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)monitorLivePcuLevel;
- (void)messageReceived:(id)a0;

@end
