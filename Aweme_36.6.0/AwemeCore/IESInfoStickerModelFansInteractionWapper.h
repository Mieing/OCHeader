@class NSString, IESInfoStickerModel;

@interface IESInfoStickerModelFansInteractionWapper : NSObject

@property (retain, nonatomic) NSString *iconName;
@property (retain, nonatomic) NSString *titleName;
@property (retain, nonatomic) IESInfoStickerModel *sticker;

+ (id)generateWithSticker:(id)a0;
+ (BOOL)isStickerMatch:(id)a0 tag:(id)a1;

- (void).cxx_destruct;

@end
