@class NSArray;

@interface AWEIMUITagLabelViewContainer : UIView

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (copy, nonatomic) NSArray *models;
@property (nonatomic) double tagInterval;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } minEdgeInsets;
@property (nonatomic) long long alignment;

- (void)configWithTagModels:(id)a0 inSize:(struct CGSize { double x0; double x1; })a1;
- (void)__clearSubviews;
- (struct CGSize { double x0; double x1; })__addTagWithinWidth:(double)a0 height:(double)a1;
- (void)__setupTagsFrameFromLeft:(double)a0 containerHeight:(double)a1;
- (void)configWithTagModels:(id)a0;
- (void).cxx_destruct;
- (void)clearTags;

@end
