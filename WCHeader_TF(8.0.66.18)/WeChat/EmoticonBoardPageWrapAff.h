@class NSString, EmoticonBoardQQEmojiPageData, EmoticonBoardCustomPageData;

@interface EmoticonBoardPageWrapAff : WXPBGeneratedMessage

@property (nonatomic) int pageType;
@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) NSString *packageName;
@property (nonatomic) unsigned int packEmoticonCount;
@property (retain, nonatomic) EmoticonBoardQQEmojiPageData *qqEmojiData;
@property (retain, nonatomic) EmoticonBoardCustomPageData *customData;

+ (void)initialize;

@end
