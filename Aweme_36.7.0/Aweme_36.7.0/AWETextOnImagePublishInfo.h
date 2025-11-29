@protocol AEKBaseTextStickerOperator;

@interface AWETextOnImagePublishInfo : NSObject

@property (retain, nonatomic) id<AEKBaseTextStickerOperator> sticker;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;

+ (id)stickerInfoForExport:(id)a0;
+ (BOOL)hasDiffWithStickerDataString:(id)a0 sticker:(id)a1;
+ (BOOL)hasTextOnImageSticker:(id)a0;

- (void).cxx_destruct;

@end
