@class MMUILabel;

@interface MMMusicLiveSendLocationBubbleView : MMUIView

@property (retain, nonatomic) MMUILabel *hintLabel;
@property (nonatomic) double triangleRightMargin;

- (id)init;
- (id)genPath;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
