@class NSArray;

@interface LSBachContourInfoItemModel : NSObject

@property (nonatomic) struct contour_item_ { unsigned short x0; struct point_ { unsigned short x0; unsigned short x1; } x1[0]; } *contour_item;
@property (retain, nonatomic) NSArray *points;

- (void).cxx_destruct;
- (void)dealloc;

@end
