@class NSString;

@interface AWEDTOMemoriesModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL validMemories;
@property (copy, nonatomic) NSString *themeId;
@property (copy, nonatomic) NSString *trackTitle;
@property (copy, nonatomic) NSString *trackThemeTag;
@property (copy, nonatomic) NSString *mainStickerTitle;
@property (nonatomic) double mainStickerOffsetY;
@property (nonatomic) double mainStickerFontSize;
@property (copy, nonatomic) NSString *subStickerTitle;
@property (nonatomic) double subStickerOffsetY;
@property (nonatomic) double subStickerFontSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
