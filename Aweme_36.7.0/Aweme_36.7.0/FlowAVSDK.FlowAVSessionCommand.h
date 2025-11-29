@class NSString;

@interface FlowAVSDK.FlowAVSessionCommand : NSObject {
    void /* function */ extra;
}

@property (nonatomic) long long type;
@property (nonatomic, copy) NSString *extra;
@property (nonatomic, readonly) NSString *debugDesc;

- (id)initWithType:(long long)a0 extra:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
