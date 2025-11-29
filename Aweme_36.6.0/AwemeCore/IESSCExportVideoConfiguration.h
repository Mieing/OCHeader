@class NSDictionary, NSString;

@interface IESSCExportVideoConfiguration : NSObject

@property (retain, nonatomic) NSDictionary *inputSettings;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (nonatomic) unsigned long long averageBitRate;
@property (retain, nonatomic) NSString *videoProfileLevel;
@property (copy, nonatomic) NSDictionary *videoOutputSetting;

- (id)makeOutputSettingWithVideoComposition:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
