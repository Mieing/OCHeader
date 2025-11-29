@class NSString, AWEIMEmojiStickerSearchResponseModel, AWEIMEmojiResourceSearchResponseModel, NSDictionary, NSNumber;

@interface AWEIMEmojiResourcesListSearchResponseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (retain, nonatomic) AWEIMEmojiResourceSearchResponseModel *resourceSearch;
@property (retain, nonatomic) AWEIMEmojiStickerSearchResponseModel *stickerSearch;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
