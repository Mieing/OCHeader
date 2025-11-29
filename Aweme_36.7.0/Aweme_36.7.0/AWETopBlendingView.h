@class NSArray, NSMutableArray;

@interface AWETopBlendingView : UIView

@property (retain, nonatomic) NSArray *segments;
@property (retain, nonatomic) NSMutableArray *items;

- (void)updateSegments;
- (void)prepareSegments;
- (void)drawSegments;
- (long long)compareFloat:(double)a0 and:(double)a1;
- (void)addItem:(id)a0 toZOrderedArray:(id)a1;
- (void)addItem:(id)a0;
- (void).cxx_destruct;
- (void)removeItem:(id)a0;
- (void)layoutSubviews;

@end
