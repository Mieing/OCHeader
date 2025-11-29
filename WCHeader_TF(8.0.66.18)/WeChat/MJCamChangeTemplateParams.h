@class OMJCaptureOptions, OMJMusicInfo, OMJCamTemplateInfo, OMJCamGestureRecognizerSettings, OMJCamMetaTraits;

@interface MJCamChangeTemplateParams : NSObject

@property (retain, nonatomic) OMJCaptureOptions *templateOptions;
@property (retain, nonatomic) OMJCamTemplateInfo *templateInfo;
@property (retain, nonatomic) OMJCamGestureRecognizerSettings *gestureSettings;
@property (retain, nonatomic) OMJCamMetaTraits *camMetaTraits;
@property (retain, nonatomic) OMJMusicInfo *selectedMusicInfo;

- (void).cxx_destruct;

@end
