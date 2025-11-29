@class NSString;

@interface FlowAVSDK.FlowAVAudioSessionConfig : NSObject

@property (nonatomic, readonly) NSString *audioSessionCategory;
@property (nonatomic, readonly) NSString *audioSessionMode;
@property (nonatomic, readonly) unsigned long long audioSessionCategoryOptions;

- (id)initWithAudioSessionCategory:(id)a0 audioSessionMode:(id)a1 audioSessionCategoryOptions:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)init;

@end
