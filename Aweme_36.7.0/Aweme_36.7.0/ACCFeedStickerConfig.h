@class NSNumber, ACCStickerGeometryModel;

@interface ACCFeedStickerConfig : NSObject

@property (retain, nonatomic) ACCStickerGeometryModel *locationModel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } playerFrame;
@property (nonatomic) BOOL isStablePosition;
@property (retain, nonatomic) NSNumber *height;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } safeArea;

- (id)initWithLocation:(id)a0;
- (void).cxx_destruct;

@end
