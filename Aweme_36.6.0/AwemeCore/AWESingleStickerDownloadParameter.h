@class IESEffectModel;

@interface AWESingleStickerDownloadParameter : NSObject

@property (retain, nonatomic) IESEffectModel *sticker;
@property (copy, nonatomic) id /* block */ downloadProgressBlock;
@property (copy, nonatomic) id /* block */ compeletion;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) BOOL isPreload;

- (void).cxx_destruct;

@end
