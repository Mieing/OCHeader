@class NSDictionary;

@interface AWEStreamEditManager : NSObject

@property (nonatomic, getter=isPrepared) BOOL prepared;
@property (retain, nonatomic) NSDictionary *preparationInfo;
@property (nonatomic, getter=isCloudCompilePrepared) BOOL cloudCompilePrepared;
@property (retain, nonatomic) NSDictionary *cloudCompileAuthInfo;
@property (nonatomic, getter=isBufferingDone) BOOL bufferingDone;

+ (id)sharedManager;

- (void)prepareForShareToStory;
- (void)loadCanvasAnimatedInfoEffect;
- (BOOL)isBufferingDoneWithPublishModel:(id)a0;
- (void)beginPreparation;
- (void)beginShareImagePreparation;
- (void)endPreparationWithResult:(BOOL)a0 info:(id)a1;
- (void)endShareImagePreparationWithResult:(BOOL)a0 info:(id)a1;
- (void)endCloudCompilePreparation:(id)a0;
- (void)resetShareImageStatus;
- (void)prepareForShareToStoryAtLaunch;
- (void)resetStatus;
- (void).cxx_destruct;

@end
