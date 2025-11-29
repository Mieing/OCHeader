@class AWEVideoPublishViewModel;

@interface AWEPublishAlbumFlowHandle : NSObject

@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;

- (void)saveServerExecutedImage;
- (void)takePhotoModeSaveWatermarkImage;
- (void)videoEffectSavePhoto:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
