@interface AWEDPlayerElementStatusIconConfig : NSObject

@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL isMute;
@property (nonatomic) BOOL isZoomIn;

+ (id)configWithMuteStatus:(BOOL)a0;
+ (id)configWithPlayStatus:(BOOL)a0;
+ (id)configWithZoomStatus:(BOOL)a0;

@end
