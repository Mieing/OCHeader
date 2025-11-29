@class NSString;

@interface IESLiveLinkRTCInteractTranscodingAudioConfig : NSObject

@property (copy, nonatomic) NSString *codec;
@property (nonatomic) long long sampleRate;
@property (nonatomic) long long channels;
@property (nonatomic) long long kBitRate;
@property (nonatomic) long long profile;

- (void).cxx_destruct;

@end
