@class NSDictionary, NSString;

@interface FlowAVSDK.FlowAVSessionTriggerCommand : NSObject {
    void /* function */ extra;
}

@property (nonatomic) long long type;
@property (nonatomic) long long triggerType;
@property (nonatomic, copy) NSDictionary *extra;
@property (nonatomic, readonly) NSString *debugDesc;

- (id)initWithType:(long long)a0 triggerType:(long long)a1 extra:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
