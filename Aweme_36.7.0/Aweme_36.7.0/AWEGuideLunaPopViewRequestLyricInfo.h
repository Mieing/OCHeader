@class AWEGuideLunaPopViewRequestKrcLyric, AWEGuideLunaPopViewRequestLrcLyric;

@interface AWEGuideLunaPopViewRequestLyricInfo : AWEBaseApiModel

@property (retain, nonatomic) AWEGuideLunaPopViewRequestLrcLyric *lrc;
@property (retain, nonatomic) AWEGuideLunaPopViewRequestKrcLyric *krc;

+ (id)lrcJSONTransformer;
+ (id)krcJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
