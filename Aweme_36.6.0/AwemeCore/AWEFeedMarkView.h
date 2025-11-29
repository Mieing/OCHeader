@class CAShapeLayer;

@interface AWEFeedMarkView : AWEMarkView

@property (retain, nonatomic) CAShapeLayer *cornerLayer;
@property (nonatomic) BOOL isVideoLayoutAdjust;
@property (nonatomic) BOOL useLayoutAlignLeft;

- (id)initWithUIConfigModel:(id)a0;
- (void)setAdTagText:(id)a0;
- (void)setMarkImageURLs:(id)a0;
- (void)updateLayoutHasAdTag:(BOOL)a0;
- (void)adjustUIStyleWithConfigModel:(id)a0 HasAdTag:(BOOL)a1;
- (void)clearTopCornerRadiusIfNeeded;
- (void)adjustUIStyleWithConfigModel:(id)a0 HasAdTag:(BOOL)a1 UseLayoutAlignLeft:(BOOL)a2;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
