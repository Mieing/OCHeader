@class NSArray, ABKTextTemplateStickerResource, NSString;

@interface ABKTextStickerConfig : ABKBaseStickerConfig

@property (retain, nonatomic) NSArray *dependResourceList;
@property (retain, nonatomic) NSArray *textList;
@property (retain, nonatomic) ABKTextTemplateStickerResource *stickerResource;
@property (nonatomic) BOOL useDefaultStyle;
@property (nonatomic) BOOL virsualSticker;
@property (retain, nonatomic) NSString *extraKey;
@property (nonatomic) BOOL needChangeRichStyle;
@property (nonatomic) BOOL hasEdit;
@property (retain, nonatomic) NSString *UUID;
@property (copy, nonatomic) id /* block */ editBlock;
@property (copy, nonatomic) id /* block */ externalDeleteBlock;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
