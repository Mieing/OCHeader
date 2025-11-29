@class NSString;

@interface WeChat.MagicFinderVideoInfo : NSObject {
    void /* unknown type, empty encoding */ videoUrl;
    void /* unknown type, empty encoding */ videoToken;
}

@property (nonatomic, copy) NSString *videoUrl;
@property (nonatomic, copy) NSString *videoToken;

- (id)initWithVideoUrl:(id)a0 videoToken:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
