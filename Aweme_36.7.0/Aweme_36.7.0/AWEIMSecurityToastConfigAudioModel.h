@class NSString, NSData;

@interface AWEIMSecurityToastConfigAudioModel : AWEBaseApiModel

@property (nonatomic) long long audioDurationInMilliseconds;
@property (copy, nonatomic) NSString *audioText;
@property (copy, nonatomic) NSString *audioUrl;
@property (retain, nonatomic) NSData *audioData;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)hasAudioUrl;
- (void)requestAudioDataIfNeeded:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)hasAudioData;

@end
