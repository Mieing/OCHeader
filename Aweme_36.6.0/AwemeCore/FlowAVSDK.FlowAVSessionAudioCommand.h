@class NSDictionary;

@interface FlowAVSDK.FlowAVSessionAudioCommand : NSObject {
    void /* function */ param;
}

@property (nonatomic) long long commandType;
@property (nonatomic, copy) NSDictionary *param;

- (id)initWithCommandType:(long long)a0 param:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
