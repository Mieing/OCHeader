@class NSString;

@interface WCCanvasComponentPreloadWebViewInfo : MMObject <NSCoding>

@property (retain, nonatomic) NSString *webviewUrl;
@property (nonatomic) double webviewWidth;
@property (nonatomic) double webviewHeight;
@property (nonatomic) double screenHeightOff;
@property (nonatomic) struct CGSize { double width; double height; } webviewDynamicSize;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
