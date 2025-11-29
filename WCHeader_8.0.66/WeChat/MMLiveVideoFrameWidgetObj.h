@class NSString, UIImage;

@interface MMLiveVideoFrameWidgetObj : NSObject

@property (retain, nonatomic) NSString *instanceId;
@property (nonatomic) struct CGPoint { double x; double y; } normalizedCenter;
@property (nonatomic) struct CGPoint { double x; double y; } normalizedAnchorPoint;
@property (nonatomic) struct { struct CGSize { double width; double height; } scale; double rotation; } transformDescription;
@property (retain, nonatomic) UIImage *contentImage;

- (id)initWithInstanceId:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
