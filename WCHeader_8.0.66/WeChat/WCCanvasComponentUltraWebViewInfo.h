@class NSString;

@interface WCCanvasComponentUltraWebViewInfo : MMObject <NSCoding>

@property (retain, nonatomic) NSString *webViewUrl;
@property (nonatomic) double webViewWidth;
@property (nonatomic) double webViewHeight;
@property (nonatomic) BOOL hideWebViewProgress;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
