@class NSString, UIImage;

@interface MMLiveWevisionWidgetObj : NSObject <NSCopying>

@property (retain, nonatomic) NSString *instanceId;
@property (retain, nonatomic) UIImage *contentImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedFrame;
@property (nonatomic) struct CGPoint { double x; double y; } normalizedAnchorPoint;
@property (nonatomic) struct { double scale; double rotation; struct CGVector { double dx; double dy; } translation; } transformDescription;

+ (BOOL)isNormalizedAnchorPointValid:(struct CGPoint { double x0; double x1; })a0;

- (id)initWithInstanceId:(id)a0;
- (BOOL)isValid;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
