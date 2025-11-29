@class UIFont, UIColor, NSString, AWEStudioRecordCinemaViewTransform, NSNumber;
@protocol AWEStudioRecordCinemaViewAnimationManager;

@interface AWEStudioCinemaAnimationStatusImpl : NSObject <AWEStudioCinemaAnimationStatus, AWEStudioRecordCinemaViewStatus>

@property (weak, nonatomic) id<AWEStudioRecordCinemaViewAnimationManager> weakManager;
@property (retain, nonatomic) AWEStudioRecordCinemaViewTransform *transform;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (copy, nonatomic) UIFont *font;
@property (copy, nonatomic) NSNumber *alpha;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) NSNumber *cornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSNumber *scaleX;
@property (readonly, copy, nonatomic) NSNumber *scaleY;

- (void)updateTransformWithCenter:(struct CGPoint { double x0; double x1; })a0 scaleX:(id)a1 scaleY:(id)a2;
- (void)updateTransformWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
