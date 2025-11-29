@class UIImage, NSData;

@interface DecodeRequest : NSObject

@property (retain) UIImage *imageRef;
@property (retain, nonatomic) NSData *data;
@property struct { int x0; int x1; long long x2; long long x3; long long x4; int x5; int x6; } *frameInfo;

- (void)dealloc;
- (void).cxx_destruct;

@end
