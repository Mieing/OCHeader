@class NSString;

@interface MediaUtilsAudio : NSObject {
    void /* function */ encodeType;
    void /* function */ sampleRate;
}

@property (nonatomic) float bitrate;
@property (nonatomic) double duration;
@property (nonatomic, copy) NSString *encodeType;
@property (nonatomic, copy) NSString *sampleRate;

- (void).cxx_destruct;
- (id)init;

@end
