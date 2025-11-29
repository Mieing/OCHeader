@class NSString, UIImage;

@interface AWEEditStickerBubbleItem : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) NSString *actionTag;
@property (nonatomic) BOOL showShakeAnimation;
@property (copy, nonatomic) id /* block */ shakeAniPerformedBlock;

- (id)initWithImage:(id)a0 title:(id)a1 actionBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end
