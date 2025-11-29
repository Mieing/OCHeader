@class NSString;

@interface VEBrushStickerParam : NSObject

@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) NSString *resPath;
@property (retain, nonatomic) NSString *param;
@property (nonatomic) struct CGPoint { double x; double y; } touchPoint;
@property (nonatomic) struct CGPoint { double x; double y; } delatPoint;
@property (nonatomic) double factor;
@property (retain, nonatomic) NSString *pngSavePath;
@property (copy, nonatomic) id /* block */ pngSaveBlock;

- (void).cxx_destruct;

@end
