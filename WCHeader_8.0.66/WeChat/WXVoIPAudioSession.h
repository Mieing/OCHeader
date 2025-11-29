@protocol IWXVoIPAudioSessionDelegate;

@interface WXVoIPAudioSession : NSObject

@property (weak, nonatomic) id<IWXVoIPAudioSessionDelegate> delegate;

+ (id)sharedInstance;

- (id)initPrivate;
- (BOOL)setActive:(BOOL)a0 error:(id *)a1;
- (BOOL)setActive:(BOOL)a0 withOptions:(unsigned long long)a1 error:(id *)a2;
- (BOOL)setMode:(id)a0 error:(id *)a1;
- (BOOL)setCategory:(id)a0 error:(id *)a1;
- (BOOL)setCategory:(id)a0 withOptions:(unsigned long long)a1 error:(id *)a2;
- (BOOL)setCategory:(id)a0 mode:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (BOOL)setPreferredIOBufferDuration:(double)a0 error:(id *)a1;
- (BOOL)setPreferredSampleRate:(double)a0 error:(id *)a1;
- (BOOL)setPreferredOutputNumberOfChannels:(long long)a0 error:(id *)a1;
- (BOOL)overrideOutputAudioPort:(unsigned long long)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
