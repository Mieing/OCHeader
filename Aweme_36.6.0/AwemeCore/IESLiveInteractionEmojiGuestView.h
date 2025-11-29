@class IESLiveAnimatedImageView, NSString;

@interface IESLiveInteractionEmojiGuestView : UIView <IESLiveInteractionEmojiView>

@property (retain, nonatomic) IESLiveAnimatedImageView *emojiView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadEmojiWithURLs:(id)a0;
- (void)loadSubView;
- (void)loadEmojiWithFilePath:(id)a0;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
