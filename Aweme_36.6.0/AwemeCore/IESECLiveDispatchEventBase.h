@class NSDictionary, NSString;

@interface IESECLiveDispatchEventBase : NSObject <IESECLiveDispatchEvent>

@property (retain, nonatomic) NSDictionary *eventData;
@property (copy, nonatomic) NSString *eventName;
@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
