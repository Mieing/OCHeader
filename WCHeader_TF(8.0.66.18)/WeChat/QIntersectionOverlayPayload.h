@class NSData;

@interface QIntersectionOverlayPayload : NSObject

@property (retain, nonatomic) NSData *data;
@property (nonatomic) BOOL visible;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (nonatomic) BOOL isDayMode;
@property (nonatomic) int abDistance;
@property (nonatomic) int junctionStyle;
@property (nonatomic) int junctionType;
@property (nonatomic) unsigned long long leftTopCornerRadius;
@property (nonatomic) unsigned long long rightTopCornerRadius;
@property (nonatomic) unsigned long long leftBottomCornerRadius;
@property (nonatomic) unsigned long long rightBottomCornerRadius;

- (void).cxx_destruct;

@end
