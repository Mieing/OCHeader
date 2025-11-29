@class NSString;

@interface AWESearchScanOCRView : NSObject <AWESearchScanFakeView>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (readonly, nonatomic) double awe_height;
@property (readonly, nonatomic) double awe_width;
@property (readonly, nonatomic) double awe_top;
@property (readonly, nonatomic) double awe_bottom;
@property (readonly, nonatomic) double awe_left;
@property (readonly, nonatomic) double awe_right;
@property (readonly, nonatomic) double awe_centerX;
@property (readonly, nonatomic) double awe_centerY;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) unsigned long long index;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
