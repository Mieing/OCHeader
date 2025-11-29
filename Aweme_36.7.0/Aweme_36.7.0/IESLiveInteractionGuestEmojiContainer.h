@class NSString, UIView;

@interface IESLiveInteractionGuestEmojiContainer : UIView <IESLiveInteractionEmojiContainer>

@property (retain, nonatomic) UIView *emojiBgMask;
@property (nonatomic) struct CGSize { double width; double height; } emojiMaskSize;
@property (nonatomic) BOOL emojiMaskHidden;
@property (copy, nonatomic) id /* block */ shouldFilterEmojiBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerWillShowEmoji;
- (void)containerWillDismissEmoji;
- (struct CGSize { double x0; double x1; })emojiAvatarSize;
- (BOOL)shouldFilterEmoji;
- (void).cxx_destruct;

@end
