@class NSTimer;

@interface ACCIMStickerGenerateHelper : NSObject

@property (retain, nonatomic) NSTimer *requestAITimer;
@property (nonatomic) BOOL cancelAIGenerate;

+ (id)imageForGenerateFromVideoAsset:(id)a0;

- (id)compressImage:(id)a0;
- (void)trackPerformance:(id)a0;
- (void)requestAIGenerateTextWithImage:(id)a0 complete:(id /* block */)a1;
- (void).cxx_destruct;

@end
