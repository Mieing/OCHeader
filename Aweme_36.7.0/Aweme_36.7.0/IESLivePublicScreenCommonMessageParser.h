@class IESLiveEmojiTextParser;
@protocol IESLiveWebImageService;

@interface IESLivePublicScreenCommonMessageParser : NSObject

@property (retain, nonatomic) IESLiveEmojiTextParser *emojiTextParser;
@property (retain, nonatomic) id<IESLiveWebImageService> webImageService;

- (id)getGiftIconURLWithGiftID:(id)a0;
- (id)getSensitiveNicknameWithUser:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
