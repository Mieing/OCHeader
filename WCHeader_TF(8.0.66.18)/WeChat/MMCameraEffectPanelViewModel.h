@class NSArray;
@protocol MMCameraEffectPanelViewModelDelegate;

@interface MMCameraEffectPanelViewModel : NSObject

@property (retain, nonatomic) NSArray *funnyInfos;
@property (weak, nonatomic) id<MMCameraEffectPanelViewModelDelegate> delegate;

+ (unsigned long long)templateSceneWithCaptureScene:(unsigned long long)a0;

- (void)fetchFunnyInfosWithFinderUserName:(id)a0 params:(id)a1;
- (void)fetchFunnyInfoWithShortURL:(id)a0;
- (unsigned long long)getTemplateScene;
- (void).cxx_destruct;

@end
