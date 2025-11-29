@class AWEIMEmojiAuthor, NSDictionary, NSString, AWEIMStickerModel;

@interface AWEIMFindSimilarEmoticonModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEIMStickerModel *stickerModel;
@property (retain, nonatomic) AWEIMEmojiAuthor *authorModel;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)similarStickersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
