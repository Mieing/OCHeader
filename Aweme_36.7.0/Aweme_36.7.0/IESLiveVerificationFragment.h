@class IESLiveVerificationStore, NSString;

@interface IESLiveVerificationFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber>

@property (retain, nonatomic) IESLiveVerificationStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
