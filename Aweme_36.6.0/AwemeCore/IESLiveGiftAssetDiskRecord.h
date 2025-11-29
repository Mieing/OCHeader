@interface IESLiveGiftAssetDiskRecord : MTLModel

@property (nonatomic) double appSize;
@property (nonatomic) double deviceSize;
@property (nonatomic) double recordTime;

- (id)initWithAppSize:(double)a0 deviceSize:(double)a1 recordTime:(double)a2;

@end
