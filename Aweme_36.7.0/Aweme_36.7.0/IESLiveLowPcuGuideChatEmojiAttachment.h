@class UIImage, NSString;

@interface IESLiveLowPcuGuideChatEmojiAttachment : NSTextAttachment

@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) NSString *emojiDescription;
@property (nonatomic) double alignToFontSize;

- (id)initWithIcon:(id)a0 emojiDescription:(id)a1;
- (void).cxx_destruct;

@end
