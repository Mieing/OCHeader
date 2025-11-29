@class NSString;
@protocol IESLiveWRDSMessageSubscriber, IESLiveIMMessageReciever;

@interface IESLiveDataSyncReceiver : NSObject <IESLiveIMMessageReciever>

@property (weak, nonatomic) id<IESLiveWRDSMessageSubscriber> subscriber;
@property (retain, nonatomic) Class syncDataClass;
@property (retain, nonatomic) id<IESLiveIMMessageReciever> nextReceiver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didRecieveMessages:(id)a0;
- (void)didRecievePacket:(id)a0;
- (void).cxx_destruct;

@end
