@class NSArray, NSString, AWEInteractionStickerModel;

@interface AWEMusicDetailInspirationQuickFlashBodyModel : AWEBaseApiModel

@property (retain, nonatomic) AWEInteractionStickerModel *quickFlashStickerModel;
@property (retain, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) NSString *nextCursor;
@property (nonatomic) BOOL hasMore;

+ (id)awemeListJSONTransformer;
+ (id)quickFlashStickerModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
