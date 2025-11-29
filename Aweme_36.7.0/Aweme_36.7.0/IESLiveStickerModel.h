@class NSArray, NSString, NSDictionary;

@interface IESLiveStickerModel : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) NSArray *imageStickers;
@property (readonly, nonatomic) NSArray *textStickers;
@property (retain, nonatomic) NSArray *reserStickerAppearance;
@property (readonly, nonatomic) BOOL enableNewPanelView;
@property (readonly, nonatomic) BOOL canEditTextStickers;
@property (readonly, copy, nonatomic) NSString *promptForTextStickers;
@property (retain, nonatomic) NSArray *fontConfigs;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageStickersJSONTransformer;
+ (id)textStickersJSONTransformer;
+ (id)fontConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
