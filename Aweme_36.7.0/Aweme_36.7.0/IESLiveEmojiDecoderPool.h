@class NSCache;

@interface IESLiveEmojiDecoderPool : NSObject

@property (retain, nonatomic) NSCache *webpDecoders;

- (id)decoderForUrl:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)clean;

@end
