@class NSString, NSDate;

@interface BUAudioSessionSetting : NSObject

@property BOOL systemMute;
@property (retain, nonatomic) NSDate *beginPlayDate;
@property (retain, nonatomic) NSString *originalCategory;
@property (nonatomic) BOOL allowModifyAudioSessionSetting;
@property (copy, nonatomic) NSString *sourcePath;

+ (id)shareInstance;

- (void)saveAudioSessionOriginCategory;
- (void)monitorMute;
- (void)playToEnd;
- (void).cxx_destruct;

@end
