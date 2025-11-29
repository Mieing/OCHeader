@class NSArray;

@interface MJStyleEditData : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSArray *stickers;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (nonatomic) double spacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionInset;
@property (nonatomic) BOOL segmentHasMultiSubtitles;

- (id)initWithType:(unsigned long long)a0 stickers:(id)a1 cellSize:(struct CGSize { double x0; double x1; })a2 spacing:(double)a3 sectionInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a4 segmentHasMultiSubtitles:(BOOL)a5;
- (unsigned long long)numberOfItems;
- (void).cxx_destruct;

@end
