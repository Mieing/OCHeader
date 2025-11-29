@class UIImage, NSString;

@interface AWEFormatLiveEmojiItem : NSObject <AWEFormatLiveEmojiItemInterface>

@property (retain, nonatomic) UIImage *emojiImage;
@property (retain, nonatomic) NSString *emojiId;
@property (retain, nonatomic) NSString *emojiTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
