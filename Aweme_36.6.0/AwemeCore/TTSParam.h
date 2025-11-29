@class AudioConfig, NSString;

@interface TTSParam : NSObject

@property (retain, nonatomic) AudioConfig *audioConfig;
@property (retain, nonatomic) NSString *speaker;
@property (retain, nonatomic) NSString *extra;

- (void)dealloc;

@end
