@class AWEURLModel, NSString, UIImageView, NSArray, UILabel, UIView, NSAttributedString;
@protocol AFDFastReplyViewDelegate;

@interface AFDFastReplyView : UIView <AFDFastReplyViewProtocol>

@property (retain, nonatomic) UIView *inputBar;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *placeholderLabel;
@property (retain, nonatomic) UIView *emojisContainer;
@property (retain, nonatomic) UIImageView *emojiBtn;
@property (nonatomic) BOOL largeFont;
@property (weak, nonatomic) id<AFDFastReplyViewDelegate> delegate;
@property (copy, nonatomic) NSString *placeholder;
@property (retain, nonatomic) NSAttributedString *attributeString;
@property (retain, nonatomic) AWEURLModel *avatarURL;
@property (retain, nonatomic) NSArray *emojis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (BOOL)enableBigFont;

- (id)aAWEPadModuleAdapter;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })placeholderLabelFrame;
- (double)inputBarWidth;
- (void)setupInputBar;
- (void)setupPlaceholderLabel;
- (void)setupEmojis;
- (void)setupIMEmojiBtnIfNeeded;
- (void)updateEmojisContainer;
- (id)imageViewCreatorWithIndex:(long long)a0 emoji:(id)a1;
- (id)imageCreatorWithEmoji:(id)a0;
- (void)animationWithEmojiView:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)setupAvatarView;
- (void)updateAccessibilityElements;

@end
