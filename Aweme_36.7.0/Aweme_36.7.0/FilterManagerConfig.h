@interface FilterManagerConfig : NSObject

@property (nonatomic) BOOL infoStickerForceAmazing;
@property (nonatomic) BOOL useGlobalEffectGroup;
@property (nonatomic) BOOL isUsedForExport;
@property (nonatomic) BOOL disableEffectGroup;
@property (nonatomic) BOOL disableInfoSticker;
@property (nonatomic) BOOL disableTransition;
@property (nonatomic) BOOL infostickerTextureRelease;
@property (nonatomic) BOOL disableExtracFilter;
@property (nonatomic) BOOL enableKeyFrameFeature;
@property (copy, nonatomic) id /* block */ stickerRecoverEvent;
@property (copy, nonatomic) id /* block */ imageBlock;

- (void).cxx_destruct;
- (id)init;

@end
