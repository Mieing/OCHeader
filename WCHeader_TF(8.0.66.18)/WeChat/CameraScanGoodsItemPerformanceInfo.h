@interface CameraScanGoodsItemPerformanceInfo : NSObject

@property (nonatomic) unsigned long long detectDurantion;
@property (nonatomic) unsigned long long imageCropDurantion;
@property (nonatomic) unsigned long long compressDurantion;
@property (nonatomic) unsigned long long encodeSize;
@property (nonatomic) unsigned long long encodeType;
@property (nonatomic) unsigned long long queueDurantion;
@property (nonatomic) unsigned long long uploadDurantion;
@property (nonatomic) unsigned long long exchangeDurantion;
@property (nonatomic) unsigned long long frameIndex;
@property (nonatomic) unsigned long long stableFrameIndex;

@end
