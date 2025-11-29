@class NSString;

@interface IESLiveVerifyCreateAdapterImpl : IESLiveBaseAdapter <IESLiveVerifyCreateAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createVerify;

@end
