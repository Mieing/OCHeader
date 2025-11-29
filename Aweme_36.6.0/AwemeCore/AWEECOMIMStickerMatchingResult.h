@class UIImage, NSString;

@interface AWEECOMIMStickerMatchingResult : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (retain, nonatomic) UIImage *emojiImage;
@property (retain, nonatomic) NSString *showingDescription;

- (void).cxx_destruct;

@end
