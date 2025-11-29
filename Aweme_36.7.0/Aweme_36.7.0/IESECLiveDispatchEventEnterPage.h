@class NSDictionary, NSString;

@interface IESECLiveDispatchEventEnterPage : IESECLiveDispatchEventBase

@property (retain, nonatomic) NSDictionary *enterLiveParams;
@property (copy, nonatomic) NSString *pageBtmID;

- (id)initWithEnterParams:(id)a0;
- (void).cxx_destruct;
- (long long)type;
- (id)eventData;
- (id)eventName;

@end
