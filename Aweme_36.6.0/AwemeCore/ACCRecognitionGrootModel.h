@class ACCGrootStickerModel;

@interface ACCRecognitionGrootModel : NSObject

@property (retain, nonatomic) ACCGrootStickerModel *stickerModel;
@property (nonatomic) double scale;
@property (nonatomic) long long index;
@property (nonatomic) BOOL didRecover;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
