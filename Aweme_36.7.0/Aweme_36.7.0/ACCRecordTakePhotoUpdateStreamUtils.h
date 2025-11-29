@interface ACCRecordTakePhotoUpdateStreamUtils : NSObject

+ (double)captureRatio4_3HeightWithWidth:(double)a0;
+ (double)captureRatio4_3TopMarginWithSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })captureRatio4_3FrameWithSize:(struct CGSize { double x0; double x1; })a0;
+ (BOOL)recordModeIsTakePhoto:(id)a0;
+ (BOOL)recordModeIsVideo:(id)a0;
+ (BOOL)recordModeIsOffShoot:(id)a0;
+ (BOOL)recordModeIsTakePhotoForM:(id)a0;
+ (BOOL)recordModeIsVideoForM:(id)a0;
+ (BOOL)recordModeIsOffShootForM:(id)a0;

@end
