@interface IESMMEngineConfig : NSObject

@property (nonatomic) BOOL useAmazingEngine;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (nonatomic) BOOL customStikcerLayer;
@property (nonatomic) BOOL infostickerTextureRelease;

@end
