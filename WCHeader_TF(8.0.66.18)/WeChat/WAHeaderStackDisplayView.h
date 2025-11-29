@class UIImage, NSMutableArray;

@interface WAHeaderStackDisplayView : MMUIView

@property (retain, nonatomic) NSMutableArray *headerViews;
@property (retain, nonatomic) NSMutableArray *layers;
@property (nonatomic) double coverGap;
@property (nonatomic) double headerSize;
@property (retain, nonatomic) UIImage *defaultImage;

- (id)init;
- (id)initWithHeaderSize:(double)a0;
- (double)getWidth;
- (double)getHeight;
- (void)fillWithHeaderImageUrls:(id)a0 animated:(BOOL)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)fitHeaderViewCount:(unsigned long long)a0;
- (void)resetHeaderViewsPosition;
- (void)orderHeaderViews;
- (void).cxx_destruct;

@end
