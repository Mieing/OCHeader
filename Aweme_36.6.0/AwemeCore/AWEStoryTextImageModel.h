@class NSString, AWETextImageTagModel, NSArray, AWETextStickerReadModel, NSDictionary, AWEStoryColor, AWEStoryFontModel, NSIndexPath;

@interface AWEStoryTextImageModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isCaptionSticker;
@property (nonatomic) BOOL isPOISticker;
@property (nonatomic) BOOL isTaskSticker;
@property (nonatomic) BOOL isAIWritingSticker;
@property (nonatomic) BOOL isNotEditableSticker;
@property (nonatomic) BOOL isNotDeletableSticker;
@property (nonatomic) BOOL isAutoAdded;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *lastContent;
@property (retain, nonatomic) NSIndexPath *colorIndex;
@property (retain, nonatomic) AWEStoryColor *fontColor;
@property (retain, nonatomic) NSIndexPath *fontIndex;
@property (retain, nonatomic) AWEStoryFontModel *fontModel;
@property (nonatomic) unsigned long long textStyle;
@property (nonatomic) long long alignmentType;
@property (retain, nonatomic) AWETextImageTagModel *imgTagModel;
@property (nonatomic) double keyboardHeight;
@property (nonatomic) double realStartTime;
@property (nonatomic) double realDuration;
@property (nonatomic) double fontSize;
@property (nonatomic) double fontScale;
@property (nonatomic) double widthLimit;
@property (nonatomic) BOOL isAddedInEditView;
@property (copy, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) AWETextStickerReadModel *readModel;
@property (copy, nonatomic) NSArray *extraInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extraInfosJSONTransformer;
+ (id)fontColorJSONTransformer;
+ (id)fontModelJSONTransformer;
+ (id)indexPathJSONTransformer;
+ (id)colorIndexJSONTransformer;
+ (id)fontIndexJSONTransformer;
+ (id)readModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithStyleInfo:(id)a0;
- (BOOL)isValidStyle;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)trackInfo;
- (id)styleInfo;

@end
