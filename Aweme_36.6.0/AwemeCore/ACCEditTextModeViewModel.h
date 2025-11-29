@class AWEVideoPublishViewModel;

@interface ACCEditTextModeViewModel : NSObject

@property (retain, nonatomic) AWEVideoPublishViewModel *repository;

- (void)replaceImageMainTrackWithPath:(id)a0;
- (unsigned long long)transtionTextModeIndexInWorkSpace;
- (id)extrasForPublishWithOffset:(long long)a0;
- (id)extrasForPublish;
- (void)replaceImageMainTrackWithPath:(id)a0 render:(BOOL)a1;
- (BOOL)enableOptPicShinning;
- (void)p_updateCanvasIfNeeded;
- (id)textModeProjectInWorkSpace;
- (void).cxx_destruct;

@end
