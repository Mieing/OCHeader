@class NSString;

@interface MMOpenVoiceScreenshotTask : NSObject

@property (retain, nonatomic) NSString *appid;
@property (copy, nonatomic) id /* block */ callback;

- (id)initWithAppID:(id)a0 complete:(id /* block */)a1;
- (void)cancel;
- (void)onVideoFrame:(struct __CVBuffer { } *)a0 rotation:(int)a1;
- (id)convert2CGImage:(struct __CVBuffer { } *)a0 retation:(int)a1;
- (void).cxx_destruct;

@end
