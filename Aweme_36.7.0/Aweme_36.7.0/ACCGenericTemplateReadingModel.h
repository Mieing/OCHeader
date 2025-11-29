@class NSString, AVAsset, IESMMVideoDataClipRange;

@interface ACCGenericTemplateReadingModel : NSObject

@property (copy, nonatomic) NSString *stickerViewId;
@property (copy, nonatomic) NSString *speakerName;
@property (nonatomic) double speedRate;
@property (retain, nonatomic) AVAsset *audioAsset;
@property (retain, nonatomic) IESMMVideoDataClipRange *clipRange;
@property (copy, nonatomic) NSString *audioSlotUUID;

+ (void)setupTTSModelWithAudioClip:(id)a0 sticker:(id)a1;
+ (double)convertSpeedRate:(double)a0;
+ (id)setupTemplateTextReadingMap:(id)a0;

- (void).cxx_destruct;

@end
