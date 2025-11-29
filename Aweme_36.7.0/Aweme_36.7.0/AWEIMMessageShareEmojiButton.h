@class NSString;

@interface AWEIMMessageShareEmojiButton : UIButton

@property (nonatomic) BOOL animating;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) unsigned long long shareState;

- (void)p_updateUI;
- (void)p_updateUIAnimated:(BOOL)a0;
- (id)p_backgroundColorForState:(unsigned long long)a0;
- (void)setShareState:(unsigned long long)a0 animated:(BOOL)a1;
- (id)initWithSource:(id)a0;
- (void).cxx_destruct;

@end
