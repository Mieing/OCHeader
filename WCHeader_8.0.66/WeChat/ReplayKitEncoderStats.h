@interface ReplayKitEncoderStats : NSObject

@property (nonatomic) unsigned int encoder_type;
@property (nonatomic) unsigned int encode_fps;
@property (nonatomic) unsigned int encode_width;
@property (nonatomic) unsigned int encode_height;
@property (nonatomic) float encode_fps_health;
@property (nonatomic) float encode_bitrate_health;

@end
