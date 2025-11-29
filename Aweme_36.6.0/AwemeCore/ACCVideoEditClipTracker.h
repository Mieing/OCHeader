@class AWEVideoPublishViewModel;

@interface ACCVideoEditClipTracker : NSObject

@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;

- (id)initWithPublishModel:(id)a0;
- (void)trackChangeSyncModeEvent;
- (void)trackAfterFirstAIClip:(id)a0 clipStartTime:(double)a1 status:(long long)a2 otherParams:(id)a3;
- (void).cxx_destruct;

@end
