@class NSString;

@interface FlowAVSDK.FlowAVSpeechAECConfig : NSObject {
    void /* function */ audioDumpPath;
    void /* function */ modelPath;
}

@property (nonatomic, readonly) unsigned long long srcSampleRate;
@property (nonatomic, readonly) unsigned long long srcNumberChannel;
@property (nonatomic, readonly) unsigned long long srcDepth;
@property (nonatomic, readonly) unsigned long long refSampleRate;
@property (nonatomic, readonly) unsigned long long refNumberChannel;
@property (nonatomic, readonly) unsigned long long refDepth;
@property (nonatomic, copy) NSString *audioDumpPath;
@property (nonatomic, readonly) NSString *modelPath;
@property (nonatomic, readonly) long long collectCount;
@property (nonatomic, readonly) long long frameMs;

- (id)initWithSrcSampleRate:(unsigned long long)a0 srcNumberChannel:(unsigned long long)a1 srcDepth:(unsigned long long)a2 refSampleRate:(unsigned long long)a3 refNumberChannel:(unsigned long long)a4 refDepth:(unsigned long long)a5 audioDumpPath:(id)a6 modelPath:(id)a7 collectCount:(long long)a8 frameMs:(long long)a9;
- (void).cxx_destruct;
- (id)init;

@end
