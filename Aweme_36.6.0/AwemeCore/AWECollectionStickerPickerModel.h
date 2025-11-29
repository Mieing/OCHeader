@class NSArray, IESEffectModel;

@interface AWECollectionStickerPickerModel : NSObject

@property (copy, nonatomic) NSArray *stickers;
@property (retain, nonatomic) IESEffectModel *currentSticker;
@property (retain, nonatomic) IESEffectModel *stickerWillSelect;

- (void).cxx_destruct;

@end
