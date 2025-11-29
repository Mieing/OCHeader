@class NSAttributedString;

@interface AWEModernFeedVideoDeepQAShortAnswerFrame : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } shortAnswerFrame;
@property (copy, nonatomic) NSAttributedString *shortAnswerText;

- (void)configFrameWithModel:(id)a0 containerWidth:(double)a1 leftMargin:(double)a2 rightMargin:(double)a3;
- (void).cxx_destruct;
- (id)init;

@end
