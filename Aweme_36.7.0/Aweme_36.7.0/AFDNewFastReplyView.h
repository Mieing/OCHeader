@class UIView, NSString, NSArray, NSAttributedString, UIImage, UIImageView, AWEURLModel, UILabel;
@protocol AFDFastReplyViewDelegate, AWEPlayInteractionBottomButtonViewDelegateProtocol;

@interface AFDNewFastReplyView : UIView <AFDNewFastReplyViewProtocol, AWEPlayInteractionBottomButtonViewProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *inputBar;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *placeholderLabel;
@property (retain, nonatomic) UIView *emojisContainer;
@property (weak, nonatomic) id<AFDFastReplyViewDelegate> viewDelegate;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonViewDelegateProtocol> delegate;
@property (copy, nonatomic) NSString *placeholder;
@property (retain, nonatomic) NSAttributedString *attributeString;
@property (retain, nonatomic) AWEURLModel *avatarURL;
@property (retain, nonatomic) NSArray *emojis;
@property (retain, nonatomic) UIImage *staticAvatar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (void)layoutSubviews;
- (id)aAWEPadModuleAdapter;
- (void)updateAvatarView;
- (void)updatePlaceHolder;
- (void)updateEmojisContainer;
- (id)imageViewCreatorWithIndex:(long long)a0 emoji:(id)a1;
- (id)imageCreatorWithEmoji:(id)a0;
- (void)animationWithEmojiView:(id)a0;
- (double)placeholderLabelLeftMargin;
- (double)placeholderLabelWidth;
- (double)emojiLeftMarginWithIndex:(long long)a0;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)initWithConfig:(id)a0;
- (void)setupUI;
- (void)updateUI;
- (void)updateAccessibilityElements;

@end
