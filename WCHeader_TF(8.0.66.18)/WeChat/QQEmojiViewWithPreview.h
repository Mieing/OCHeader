@class NSString, UIImageView, UILabel, UIButton;

@interface QQEmojiViewWithPreview : MMUIView

@property (retain, nonatomic) UIImageView *m_emojiImageView;
@property (retain, nonatomic) UILabel *m_emojiLabel;
@property (retain, nonatomic) UIImageView *m_emojiPreviewBackView;
@property (retain, nonatomic) UILabel *m_emojiDescriptionLabel;
@property (retain, nonatomic) UIButton *m_emojiPreviewView;
@property (retain, nonatomic) NSString *m_emojiKey;
@property (nonatomic) BOOL needReloadPreview;

- (BOOL)changeKey:(id)a0 needSyncLoad:(BOOL)a1;
- (void)updateEmojiImageViewWithImage:(id)a0;
- (void)showEmojiLabel;
- (void)showPreview;
- (void)hidePreview;
- (void)reloadPreview;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;

@end
