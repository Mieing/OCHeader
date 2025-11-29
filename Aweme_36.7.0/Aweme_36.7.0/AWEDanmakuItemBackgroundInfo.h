@class SkityPaint;

@interface AWEDanmakuItemBackgroundInfo : NSObject

@property (retain, nonatomic) SkityPaint *borderPaint;
@property (retain, nonatomic) SkityPaint *borderGroundPaint;
@property (nonatomic) BOOL needShowOwnerBorder;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } borderFrame;

- (void).cxx_destruct;

@end
