@class NSString;

@interface FlowAVSDK.FlowAVLoudnessStrategyConfig : NSObject {
    void /* function */ metaData;
    void /* function */ deviceAiData;
}

@property (nonatomic, readonly) NSString *metaData;
@property (nonatomic, readonly) NSString *deviceAiData;
@property (nonatomic, readonly) long long loudNormAlgoType;

- (id)initWithMetaData:(id)a0 deviceAiData:(id)a1 loudNormAlgoType:(long long)a2;
- (void).cxx_destruct;
- (id)init;

@end
