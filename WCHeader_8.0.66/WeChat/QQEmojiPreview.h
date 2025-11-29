@class NSString, UIImageView, UILabel, UIButton;

@interface QQEmojiPreview : MMUIView

@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) UIButton *previewView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) NSString *emojiKey;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showWithEmojiKey:(id)a0 hideDesc:(BOOL)a1;
- (void).cxx_destruct;

@end
