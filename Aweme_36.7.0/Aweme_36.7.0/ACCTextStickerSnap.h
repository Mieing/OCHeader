@class AWETextTemplateStickerModel, NSMutableDictionary, NSString, AWEStoryTextImageModel;

@interface ACCTextStickerSnap : NSObject

@property (retain, nonatomic) AWEStoryTextImageModel *textImageModelSnap;
@property (retain, nonatomic) AWETextTemplateStickerModel *templateStickerModelSnap;
@property (retain, nonatomic) NSMutableDictionary *textClipsSnap;
@property (retain, nonatomic) NSString *selectedStickerIdentifier;
@property (nonatomic) long long categoryIndex;
@property (retain, nonatomic) NSString *categoryName;

+ (void)revertStickerView:(id)a0 withStickerSnap:(id)a1;
+ (void)revertStickerView:(id)a0 withTextImageModelSnap:(id)a1;

- (id)initWithStickerView:(id)a0;
- (id)initTextImageModeSnapWithStickerView:(id)a0;
- (void).cxx_destruct;

@end
