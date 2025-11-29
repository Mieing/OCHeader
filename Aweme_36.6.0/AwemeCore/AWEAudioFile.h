@class NSURL, NSString;

@interface AWEAudioFile : NSObject

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSURL *cachedURL;
@property (retain, nonatomic) NSString *cachKey;

+ (id)fileWithURL:(id)a0 cachedURL:(id)a1;
+ (id)fileWithURL:(id)a0;

- (id)initWithURL:(id)a0 cachedURL:(id)a1;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)audioFileURL;

@end
