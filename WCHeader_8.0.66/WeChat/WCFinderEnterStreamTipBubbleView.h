@class UIImageView, WCFinderRichTextView, FinderEnterStreamTips;

@interface WCFinderEnterStreamTipBubbleView : MMUIView

@property (retain, nonatomic) WCFinderRichTextView *richTextView;
@property (retain, nonatomic) UIImageView *arrowImgView;
@property (nonatomic) BOOL canJump;
@property (retain, nonatomic) FinderEnterStreamTips *tips;

- (id)init;
- (void)enableJump:(BOOL)a0;
- (void)setText:(id)a0;
- (void).cxx_destruct;

@end
