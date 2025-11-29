@class AudioConfig, NSString;

@interface ASRParam : NSObject

@property (retain, nonatomic) AudioConfig *audioConfig;
@property (retain, nonatomic) NSString *model;
@property (retain, nonatomic) NSString *language;
@property (nonatomic) int audioSrc;
@property (nonatomic) int enablePunctuation;
@property (retain, nonatomic) NSString *extra;

- (void)dealloc;

@end
