@class EmojiInfoObj;

@interface SingleEmotionDownloadWrap : MMObject

@property (retain, nonatomic) EmojiInfoObj *emojiInfoObj;
@property (nonatomic) BOOL isTempFirst;
@property (nonatomic) BOOL addToFirst;
@property (nonatomic) BOOL isForWebDisplay;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isSupportWxam;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
