@class NSString;
@protocol IESECOpenMessageSubscriber;

@interface IESECOpenMessageSubscriberWrapper : NSObject <IESECLiveMessageSubscriber>

@property (weak, nonatomic) id<IESECOpenMessageSubscriber> target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wrapperWithTarget:(id)a0;

- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
