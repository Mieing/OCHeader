@class NSString;

@interface IESGCPXPlayCameraCaptureParams : NSObject

@property (copy, nonatomic) NSString *certToken;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long fps;
@property (nonatomic) long long position;

- (void).cxx_destruct;

@end
