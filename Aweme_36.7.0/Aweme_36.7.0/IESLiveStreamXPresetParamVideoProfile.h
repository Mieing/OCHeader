@class NSString;

@interface IESLiveStreamXPresetParamVideoProfile : IESLivePBBaseMessage

@property (nonatomic) int bitrate;
@property (copy, nonatomic) NSString *encoder;
@property (nonatomic) int fps;
@property (nonatomic) int height;
@property (nonatomic) int keyintSec;
@property (copy, nonatomic) NSString *preset;
@property (copy, nonatomic) NSString *rateControl;
@property (nonatomic) int width;

+ (id)descriptor;

@end
