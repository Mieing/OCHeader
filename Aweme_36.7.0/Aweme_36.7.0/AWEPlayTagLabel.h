@class UIImage, NSString;

@interface AWEPlayTagLabel : AWEHollowLabel <AWEPlayTagLabelProtocol>

@property (retain, nonatomic) UIImage *shapeImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)formateDuration:(id)a0;
+ (id)playLabelFont;
+ (struct CGSize { double x0; double x1; })viewSizeWithPlayDuration:(id)a0;
+ (id)viewWithPlayDuration:(id)a0;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })playLabelInsets;
+ (struct CGSize { double x0; double x1; })labelSizeWithPlayDuration:(id)a0;

@end
