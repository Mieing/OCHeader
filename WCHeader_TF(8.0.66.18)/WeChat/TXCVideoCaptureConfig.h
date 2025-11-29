@class NSString, NSValue, UIImage, NSNumber;

@interface TXCVideoCaptureConfig : NSObject <NSCopying>

@property (retain, nonatomic) NSNumber *frameRate;
@property (copy, nonatomic) NSString *selectedDeviceId;
@property (retain, nonatomic) NSValue *resolution;
@property (retain, nonatomic) NSValue *encodeExpectResolution;
@property (copy, nonatomic) NSString *appGroupId;
@property (retain, nonatomic) UIImage *stillImage;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
