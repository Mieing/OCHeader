@class NSString;

@interface BDPCameraModel : NSObject <NSCopying>

@property (nonatomic) double left;
@property (nonatomic) double top;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (copy, nonatomic) NSString *mode;
@property (copy, nonatomic) NSString *resolution;
@property (copy, nonatomic) NSString *devicePosition;
@property (copy, nonatomic) NSString *flash;
@property (copy, nonatomic) NSString *frameSize;
@property (copy, nonatomic) NSString *data;

- (id)bdp_resolution;
- (long long)bdp_devicePosition;
- (long long)bdp_flash;
- (long long)bdp_mode;
- (id)bdp_frameSize;
- (struct CGSize { double x0; double x1; })bdp_realFrameSize;
- (void).cxx_destruct;
- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
