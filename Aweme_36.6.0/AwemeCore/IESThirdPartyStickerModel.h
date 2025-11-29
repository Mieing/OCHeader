@class NSString, IESThirdPartyStickerInfoModel;

@interface IESThirdPartyStickerModel : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *filePath;
@property (readonly, nonatomic) BOOL downloaded;
@property (nonatomic) BOOL isCustomUploadSticker;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *userName;
@property (readonly, nonatomic) IESThirdPartyStickerInfoModel *thumbnailSticker;
@property (readonly, nonatomic) IESThirdPartyStickerInfoModel *sticker;
@property (readonly, copy, nonatomic) NSString *clickURL;
@property (readonly, copy, nonatomic) NSString *extra;
@property (readonly, copy, nonatomic) NSString *authorName;
@property (readonly, nonatomic) long long authorPlatformType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isIMEmojiSticker;
- (void).cxx_destruct;

@end
