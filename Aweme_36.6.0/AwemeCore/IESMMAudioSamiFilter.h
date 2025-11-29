@class IESMMAudioSamiConfig;

@interface IESMMAudioSamiFilter : VEAudioFilter {
    void *_handle;
}

@property (nonatomic) int channels;
@property (retain, nonatomic) IESMMAudioSamiConfig *config;

- (id)initWithSampleRate:(int)a0 channels:(int)a1 config:(id)a2;
- (int)process:(float **)a0 samples:(unsigned long long)a1 channels:(int)a2;
- (int)handleIdentify;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })defaultConfigJson;
- (int)audioMetricesProcess:(float **)a0 samples:(unsigned long long)a1 channels:(int)a2;
- (int)processEnd;
- (void).cxx_destruct;
- (id)fetchResult;
- (void)dealloc;

@end
