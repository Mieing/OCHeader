@class NSString;

@interface OMJStickerOverlayDesc : OMJOverlayDesc

@property (readonly, nonatomic) unsigned long long stickerType;
@property (readonly, nonatomic) unsigned long long timingFillMode;
@property (readonly, nonatomic) NSString *filePath;

- (id)initWithStickerType:(unsigned long long)a0 timingFillMode:(unsigned long long)a1 filePath:(id)a2 spatialInfo:(id)a3;
- (void).cxx_destruct;

@end
